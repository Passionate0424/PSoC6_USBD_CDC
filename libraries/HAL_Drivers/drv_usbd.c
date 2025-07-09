/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-05-02     MagicKingC       the first version
 */
#include "board.h"

#ifdef RT_USING_USB_DEVICE
#include "drv_usbd.h"
#define LOG_TAG "drv.usbd"
#include <drv_log.h>
#include "D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2\config\GeneratedSource\cycfg_usbdev.h"
#include "D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\drivers\include\cy_usbfs_dev_drv.h"
#include "D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\drivers\include\cy_usbfs_dev_drv.h"

#define USB_IN_ENDPOINT     0x82
#define USB_OUT_ENDPOINT    0x03

static uint32_t _cy_pcd;
static struct udcd _cy_udc;
static struct ep_id _ep_pool[] =
{
       {0x0,  USB_EP_ATTR_CONTROL,     USB_DIR_INOUT,  64, ID_ASSIGNED  },
       {0x1,  USB_EP_ATTR_BULK,        USB_DIR_IN,     64, ID_UNASSIGNED},
       {0x1,  USB_EP_ATTR_BULK,        USB_DIR_OUT,    64, ID_UNASSIGNED},
       {0x2,  USB_EP_ATTR_INT,         USB_DIR_IN,     64, ID_UNASSIGNED},
       {0x2,  USB_EP_ATTR_INT,         USB_DIR_OUT,    64, ID_UNASSIGNED},
       {0x3,  USB_EP_ATTR_BULK,        USB_DIR_IN,     64, ID_UNASSIGNED},
       {0x3,  USB_EP_ATTR_BULK,        USB_DIR_OUT,    64, ID_UNASSIGNED},
       {0xFF, USB_EP_ATTR_TYPE_MASK,   USB_DIR_MASK,   0,  ID_ASSIGNED  },
};

cy_stc_usbfs_dev_drv_context_t  usb_drvContext;
cy_stc_usb_dev_context_t        usb_devContext;
cy_stc_usb_dev_hid_context_t    usb_hidContext;
cy_stc_usb_dev_cdc_context_t   usb_cdcContext;

static void usb_high_isr(void)
{
    /* Call interrupt processing */
    Cy_USBFS_Dev_Drv_Interrupt(usb_0_HW,
                               Cy_USBFS_Dev_Drv_GetInterruptCauseHi(usb_0_HW),
                               &usb_drvContext);
}

static void usb_medium_isr(void)
{
    /* Call interrupt processing */
    Cy_USBFS_Dev_Drv_Interrupt(usb_0_HW,
                               Cy_USBFS_Dev_Drv_GetInterruptCauseMed(usb_0_HW),
                               &usb_drvContext);
}
static void usb_low_isr(void)
{
    /* Call interrupt processing */
    Cy_USBFS_Dev_Drv_Interrupt(usb_0_HW,
                               Cy_USBFS_Dev_Drv_GetInterruptCauseLo(usb_0_HW),
                               &usb_drvContext);
}

const cy_stc_sysint_t usb_high_interrupt_cfg =
{
    .intrSrc = (IRQn_Type) usb_interrupt_hi_IRQn,
    .intrPriority = 5U,
};
const cy_stc_sysint_t usb_medium_interrupt_cfg =
{
    .intrSrc = (IRQn_Type) usb_interrupt_med_IRQn,
    .intrPriority = 6U,
};
const cy_stc_sysint_t usb_low_interrupt_cfg =
{
    .intrSrc = (IRQn_Type) usb_interrupt_lo_IRQn,
    .intrPriority = 7U,
};

static rt_err_t _init(rt_device_t device)
{
    Cy_USB_Dev_Init(usb_0_HW,&usb_0_config,&usb_drvContext,
                    &usb_devices[0],&usb_devConfig,&usb_devContext);

    /* Initialize the HID Class */
    //Cy_USB_Dev_HID_Init(&usb_hidConfig, &usb_hidContext, &usb_devContext);

    Cy_USB_Dev_CDC_Init(&usb_cdcConfig, &usb_cdcContext, &usb_devContext);

    /* Initialize the USB interrupts */
    Cy_SysInt_Init(&usb_high_interrupt_cfg,   &usb_high_isr);
    Cy_SysInt_Init(&usb_medium_interrupt_cfg, &usb_medium_isr);
    Cy_SysInt_Init(&usb_low_interrupt_cfg,    &usb_low_isr);

    /* Enable the USB interrupts */
    NVIC_EnableIRQ(usb_high_interrupt_cfg.intrSrc);
    NVIC_EnableIRQ(usb_medium_interrupt_cfg.intrSrc);
    NVIC_EnableIRQ(usb_low_interrupt_cfg.intrSrc);

    //����������ֱ��ö��
    //Cy_USB_Dev_Connect(true, CY_USB_DEV_WAIT_FOREVER, &usb_devContext);
    Cy_USB_Dev_Connect(true, CY_USB_DEV_WAIT_FOREVER, &usb_devContext);

    LOG_I("usb device init\n");



    return RT_EOK;
}

static rt_err_t _set_address(rt_uint8_t address)
{
//  英飞凌自动分配地址
    return RT_EOK;
}

static rt_err_t _set_config(rt_uint8_t address)
{
    return RT_EOK;
}

static rt_err_t _ep_set_stall(rt_uint8_t address)
{

    return RT_EOK;
}

static rt_err_t _ep_clear_stall(rt_uint8_t address)
{

    return RT_EOK;
}

static rt_err_t _ep_enable(uep_t ep)
{
// 英飞凌 PSoC6（Cy_USB_Dev）下，USB 端点的开启/配置通常由 USB 协议栈（Cy_USB_Dev_Init/Cy_USB_Dev_CDC_Init 等）自动完成
    return RT_EOK;
}

static rt_err_t _ep_disable(uep_t ep)
{
// 在英飞凌 PSoC6（Cy_USB_Dev）平台下，USB 端点的启用和禁用（如 _ep_enable/_ep_disable）由底层 USB 协议栈自动管理。
    return RT_EOK;
}

static rt_size_t _ep_read_prepare(rt_uint8_t address, void *buffer, rt_size_t size)
{
    /*rt_kprintf("_ep_read_prepare().tick=%d.",rt_tick_get());*/
    return size;
}

static rt_size_t _ep_read(rt_uint8_t address, void *buffer)
{
    cy_en_usb_dev_ep_state_t ep_state;
    rt_size_t size = 0;
    rt_size_t read_size = 0;
    RT_ASSERT(buffer != RT_NULL);
    /*rt_kprintf("_ep_read().tick=%d.",rt_tick_get());*/
    ep_state = Cy_USBFS_Dev_Drv_GetEndpointState(usb_0_HW,USB_OUT_ENDPOINT,
                                                 &usb_drvContext);

    /* Check if any data from USB host is ready to be read */
    if (ep_state == CY_USB_DEV_EP_COMPLETED){
        /* Check how many bytes are available to read */
        size = Cy_USB_Dev_GetEpNumToRead(USB_OUT_ENDPOINT, &usb_devContext);
        /* Copy data to the application usb buffer */
        Cy_USB_Dev_ReadEpBlocking(USB_OUT_ENDPOINT, (uint8_t *)buffer,size, &read_size,
                                  CY_USB_DEV_WAIT_FOREVER, &usb_devContext);
    }
    return read_size;
}

static rt_size_t _ep_write(rt_uint8_t address, void *buffer, rt_size_t size)
{
    Cy_USB_Dev_WriteEpBlocking(USB_IN_ENDPOINT, buffer, size-1,
                               CY_USB_DEV_WAIT_FOREVER, &usb_devContext);
    return size;
}

static rt_err_t _ep0_send_status(void)
{

    return RT_EOK;
}

static rt_err_t _suspend(void)
{
    return RT_EOK;
}

static rt_err_t _wakeup(void)
{
    return RT_EOK;
}

const static struct udcd_ops _udc_ops =
{
    _set_address,
    _set_config,
    _ep_set_stall,
    _ep_clear_stall,
    _ep_enable,
    _ep_disable,
    _ep_read_prepare,
    _ep_read,
    _ep_write,
    _ep0_send_status,
    _suspend,
    _wakeup,
};

#ifdef RT_USING_DEVICE_OPS
const static struct rt_device_ops _ops =
{
    _init,
    RT_NULL,
    RT_NULL,
    RT_NULL,
    RT_NULL,
    RT_NULL,
};
#endif

int cy_usbd_register(void){
    rt_memset((void *)&_cy_udc, 0, sizeof(struct udcd));
    _cy_udc.parent.type = RT_Device_Class_USBDevice;
#ifdef RT_USING_DEVICE_OPS
    _cy_udc.parent.ops = &_ops;
#else
    _cy_udc.parent.init = _init;
#endif
    _cy_udc.parent.user_data = &_cy_pcd;
    _cy_udc.ops = &_udc_ops;
    /* Register endpoint infomation */
    _cy_udc.ep_pool = _ep_pool;
    _cy_udc.ep0.id = &_ep_pool[0];
#ifdef BSP_USBD_SPEED_HS
    _cy_udc.device_is_hs = RT_TRUE;
#endif
    rt_device_register((rt_device_t)&_cy_udc, "usbd", 0);
    rt_usb_device_init();
    return RT_EOK;
}

INIT_DEVICE_EXPORT(cy_usbd_register);

#endif
