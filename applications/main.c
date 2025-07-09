/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-29     Rbb666       first version
 */

#include <rtthread.h>
#include <rtdevice.h>

#include "drv_gpio.h"
#include "drv_usbd.h"
#include "drv_usbd.h"
#include "cycfg_notices.h"
#include "cycfg_system.h"
#include "cycfg_clocks.h"
#include "cycfg_dmas.h"
#include "cycfg_routing.h"
#include "cycfg_peripherals.h"
#include "cycfg_pins.h"

#define LED_PIN GET_PIN(0, 0)

#define USB_STACK_SIZE 2048
#define USB_PRIORITY 5
#define USB_TICKS 5

static rt_thread_t Thread_usb;
void thread_usb_entery(void *parameter);

#define USBUART_BUFFER_SIZE (64u)
#define USBUART_COM_PORT    (0U)

int main(void)
{
    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    //    Thread_usb = rt_thread_create("usb_mouse",thread_usb_entery, RT_NULL, USB_STACK_SIZE, USB_PRIORITY, USB_TICKS);
    //    if(Thread_usb != RT_NULL)
    //        rt_thread_startup(Thread_usb);
    uint8_t buffer[USBUART_BUFFER_SIZE];
    cy_rslt_t result;
        uint32_t count;

    for (;;)
    {
        if (Cy_USB_Dev_CDC_IsDataReady(USBUART_COM_PORT, &usb_cdcContext))
        {
            /* Get number of bytes */
            count = Cy_USB_Dev_CDC_GetAll(USBUART_COM_PORT, buffer, USBUART_BUFFER_SIZE, &usb_cdcContext);

            if (0u != count)
            {
                /* Wait until component is ready to send data to host */
                while (0u == Cy_USB_Dev_CDC_IsReady(USBUART_COM_PORT, &usb_cdcContext))
                {
                }

                /* Send data back to host */
                Cy_USB_Dev_CDC_PutData(USBUART_COM_PORT, buffer, count, &usb_cdcContext);

                /* If the last sent packet is exactly the maximum packet
                 *  size, it is followed by a zero-length packet to assure
                 *  that the end of the segment is properly identified by
                 *  the terminal.
                 */
                if (USBUART_BUFFER_SIZE == count)
                {
                    /* Wait until component is ready to send data to PC. */
                    while (0u == Cy_USB_Dev_CDC_IsReady(USBUART_COM_PORT, &usb_cdcContext))
                    {
                    }

                    /* Send zero-length packet to PC. */
                    Cy_USB_Dev_CDC_PutData(USBUART_COM_PORT, NULL, 0u, &usb_cdcContext);
                }
            }
        }
    }
}

void thread_usb_entery(void *parameter)
{
    uint32_t counter = 0u;
    uint8_t mouse_data[3];
    rt_device_t usbd0 = RT_NULL;
    usbd0 = rt_device_find("hidd");
    if (usbd0)
        rt_device_open(usbd0, RT_DEVICE_FLAG_RDWR);
    else
        return;

    for (;;)
    {
        /* Check if host sent any data */
    }
}
