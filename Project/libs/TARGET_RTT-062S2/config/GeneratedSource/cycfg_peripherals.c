/*******************************************************************************
 * File Name: cycfg_peripherals.c
 *
 * Description:
 * Peripheral Hardware Block configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.50.0
 * device-db 4.23.0.8202
 * mtb-pdl-cat1 3.16.0.40964
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "cycfg_peripherals.h"

#define usb_0_INTR_LVL_SEL (CY_USBFS_DEV_DRV_SET_SOF_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_BUS_RESET_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_EP0_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_LPM_LVL(0x0U) | \
                 CY_USBFS_DEV_DRV_SET_ARB_EP_LVL(0x0U) | \
                 CY_USBFS_DEV_DRV_SET_EP1_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP2_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP3_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP4_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP5_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP6_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP7_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP8_LVL(0x1U))

cy_stc_csd_context_t cy_csd_0_context =
{
    .lockKey = CY_CSD_NONE_KEY,
};
static uint8_t usb_0_EndpointsBuffer[512] CY_ALIGN(2);
static cy_stc_dma_descriptor_t usb_0_ep1DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep2DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep3DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep4DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep5DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep6DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep7DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep8DmaDescr0;
static cy_stc_dma_descriptor_t usb_0_ep1DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep2DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep3DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep4DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep5DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep6DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep7DmaDescr1;
static cy_stc_dma_descriptor_t usb_0_ep8DmaDescr1;
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep1DmaConfig =
{
    .base = DW0,
    .chNum = 8,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep1DmaDescr0,
    .descr1 = &usb_0_ep1DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_0_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep2DmaConfig =
{
    .base = DW0,
    .chNum = 9,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep2DmaDescr0,
    .descr1 = &usb_0_ep2DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_1_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep3DmaConfig =
{
    .base = DW0,
    .chNum = 10,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep3DmaDescr0,
    .descr1 = &usb_0_ep3DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_2_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep4DmaConfig =
{
    .base = DW0,
    .chNum = 11,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep4DmaDescr0,
    .descr1 = &usb_0_ep4DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_3_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep5DmaConfig =
{
    .base = DW0,
    .chNum = 12,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep5DmaDescr0,
    .descr1 = &usb_0_ep5DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_4_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep6DmaConfig =
{
    .base = DW0,
    .chNum = 13,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep6DmaDescr0,
    .descr1 = &usb_0_ep6DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_5_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep7DmaConfig =
{
    .base = DW0,
    .chNum = 14,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep7DmaDescr0,
    .descr1 = &usb_0_ep7DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_6_TRIGGER_OUT,
};
static const cy_stc_usbfs_dev_drv_dma_config_t usb_0_ep8DmaConfig =
{
    .base = DW0,
    .chNum = 15,
    .priority = 3,
    .preemptable = false,
    .descr0 = &usb_0_ep8DmaDescr0,
    .descr1 = &usb_0_ep8DmaDescr1,
    .outTrigMux = usb_0_dma_burstend_7_TRIGGER_OUT,
};
const cy_stc_usbfs_dev_drv_config_t usb_0_config =
{
    .mode = CY_USBFS_DEV_DRV_EP_MANAGEMENT_DMA_AUTO,
    .epAccess = CY_USBFS_DEV_DRV_USE_8_BITS_DR,
    .epBuffer = usb_0_EndpointsBuffer,
    .epBufferSize = 512U,
    .dmaConfig[0] = &usb_0_ep1DmaConfig,
    .dmaConfig[1] = &usb_0_ep2DmaConfig,
    .dmaConfig[2] = &usb_0_ep3DmaConfig,
    .dmaConfig[3] = &usb_0_ep4DmaConfig,
    .dmaConfig[4] = &usb_0_ep5DmaConfig,
    .dmaConfig[5] = &usb_0_ep6DmaConfig,
    .dmaConfig[6] = &usb_0_ep7DmaConfig,
    .dmaConfig[7] = &usb_0_ep8DmaConfig,
    .enableLpm = false,
    .intrLevelSel = usb_0_INTR_LVL_SEL,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t usb_0_obj =
{
    .type = CYHAL_RSC_USB,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USB_CLOCK_DEV_BRS, CY_SYSCLK_DIV_16_BIT, 0U);
}
void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&usb_0_obj);
#endif /* defined (CY_USING_HAL) */
}
