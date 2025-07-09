/*******************************************************************************
 * File Name: cycfg_dmas.h
 *
 * Description:
 * DMA configuration
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

#if !defined(CYCFG_DMAS_H)
#define CYCFG_DMAS_H

#include "cycfg_notices.h"
#include "cy_dma.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
#include "cyhal_dma.h"
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL)
#include "mtb_hal.h"
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define cpuss_0_dw0_0_chan_10_ENABLED 1U
#define cpuss_0_dw0_0_chan_10_HW DW0
#define cpuss_0_dw0_0_chan_10_CHANNEL 10U
#define cpuss_0_dw0_0_chan_10_IRQ cpuss_interrupts_dw0_10_IRQn
#define cpuss_0_dw0_0_chan_11_ENABLED 1U
#define cpuss_0_dw0_0_chan_11_HW DW0
#define cpuss_0_dw0_0_chan_11_CHANNEL 11U
#define cpuss_0_dw0_0_chan_11_IRQ cpuss_interrupts_dw0_11_IRQn
#define cpuss_0_dw0_0_chan_12_ENABLED 1U
#define cpuss_0_dw0_0_chan_12_HW DW0
#define cpuss_0_dw0_0_chan_12_CHANNEL 12U
#define cpuss_0_dw0_0_chan_12_IRQ cpuss_interrupts_dw0_12_IRQn
#define cpuss_0_dw0_0_chan_13_ENABLED 1U
#define cpuss_0_dw0_0_chan_13_HW DW0
#define cpuss_0_dw0_0_chan_13_CHANNEL 13U
#define cpuss_0_dw0_0_chan_13_IRQ cpuss_interrupts_dw0_13_IRQn
#define cpuss_0_dw0_0_chan_14_ENABLED 1U
#define cpuss_0_dw0_0_chan_14_HW DW0
#define cpuss_0_dw0_0_chan_14_CHANNEL 14U
#define cpuss_0_dw0_0_chan_14_IRQ cpuss_interrupts_dw0_14_IRQn
#define cpuss_0_dw0_0_chan_15_ENABLED 1U
#define cpuss_0_dw0_0_chan_15_HW DW0
#define cpuss_0_dw0_0_chan_15_CHANNEL 15U
#define cpuss_0_dw0_0_chan_15_IRQ cpuss_interrupts_dw0_15_IRQn
#define cpuss_0_dw0_0_chan_8_ENABLED 1U
#define cpuss_0_dw0_0_chan_8_HW DW0
#define cpuss_0_dw0_0_chan_8_CHANNEL 8U
#define cpuss_0_dw0_0_chan_8_IRQ cpuss_interrupts_dw0_8_IRQn
#define cpuss_0_dw0_0_chan_9_ENABLED 1U
#define cpuss_0_dw0_0_chan_9_HW DW0
#define cpuss_0_dw0_0_chan_9_CHANNEL 9U
#define cpuss_0_dw0_0_chan_9_IRQ cpuss_interrupts_dw0_9_IRQn

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_10_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_10_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_10_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_10_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_10_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_11_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_11_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_11_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_11_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_11_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_12_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_12_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_12_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_12_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_12_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_13_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_13_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_13_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_13_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_13_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_14_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_14_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_14_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_14_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_14_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_15_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_15_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_15_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_15_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_15_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_8_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_8_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_8_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_8_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_8_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_0_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_1_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_2_config;
extern const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_3_config;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_0;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_1;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_2;
extern cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_3;
extern const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_9_channelConfig;
extern const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_9_crcConfig;

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t cpuss_0_dw0_0_chan_9_obj;
extern const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_9_hal_config;
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
extern const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_9_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

void reserve_cycfg_dmas(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_DMAS_H */
