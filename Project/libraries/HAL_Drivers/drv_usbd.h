/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-05-02     MagicKingC       the first version
 */
#ifndef LIBRARIES_HAL_DRIVERS_DRV_USBD_H_
#define LIBRARIES_HAL_DRIVERS_DRV_USBD_H_

#include <rtthread.h>
#include "D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\usbdev\cy_usb_dev_cdc.h"

extern cy_stc_usbfs_dev_drv_context_t  usb_drvContext;
extern cy_stc_usb_dev_context_t        usb_devContext;
extern cy_stc_usb_dev_hid_context_t    usb_hidContext;
extern cy_stc_usb_dev_cdc_context_t   usb_cdcContext;




#endif /* LIBRARIES_HAL_DRIVERS_DRV_USBD_H_ */
