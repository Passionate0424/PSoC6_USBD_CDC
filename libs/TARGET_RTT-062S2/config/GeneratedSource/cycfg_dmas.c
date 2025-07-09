/*******************************************************************************
 * File Name: cycfg_dmas.c
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

#include "cycfg_dmas.h"

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_10_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_10_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_10_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_10_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_10_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_10_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_10_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_10_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_10_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_10_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_10_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_10_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_10_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_10_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_10_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_11_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_11_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_11_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_11_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_11_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_11_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_11_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_11_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_11_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_11_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_11_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_11_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_11_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_11_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_11_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_12_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_12_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_12_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_12_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_12_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_12_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_12_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_12_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_12_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_12_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_12_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_12_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_12_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_12_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_12_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_13_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_13_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_13_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_13_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_13_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_13_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_13_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_13_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_13_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_13_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_13_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_13_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_13_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_13_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_13_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_14_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_14_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_14_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_14_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_14_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_14_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_14_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_14_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_14_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_14_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_14_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_14_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_14_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_14_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_14_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_15_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_15_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_15_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_15_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_15_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_15_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_15_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_15_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_15_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_15_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_15_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_15_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_15_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_15_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_15_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_8_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_8_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_8_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_8_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_8_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_8_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_8_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_8_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_8_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_8_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_8_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_8_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_8_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_8_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_8_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_0_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_1_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_2_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
const cy_stc_dma_descriptor_config_t cpuss_0_dw0_0_chan_9_Descriptor_3_config =
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_WORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 1,
    .xCount = 1,
    .srcYincrement = 1,
    .dstYincrement = 1,
    .yCount = 1,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_0 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_1 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_2 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
cy_stc_dma_descriptor_t cpuss_0_dw0_0_chan_9_Descriptor_3 =
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t cpuss_0_dw0_0_chan_9_channelConfig =
{
    .descriptor = &cpuss_0_dw0_0_chan_9_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
const cy_stc_dma_crc_config_t cpuss_0_dw0_0_chan_9_crcConfig =
{
    .dataReverse = false,
    .dataXor = 0,
    .reminderReverse = false,
    .reminderXor = 0,
    .polynomial = 79764919,
};

#if defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE)
const cyhal_resource_inst_t cpuss_0_dw0_0_chan_9_obj =
{
    .type = CYHAL_RSC_DW,
    .block_num = 0U,
    .channel_num = cpuss_0_dw0_0_chan_9_CHANNEL,
};
const cyhal_dma_configurator_t cpuss_0_dw0_0_chan_9_hal_config =
{
    .resource = &cpuss_0_dw0_0_chan_9_obj,
    .dw_channel_config = &cpuss_0_dw0_0_chan_9_channelConfig,
    .dw_descriptor_config = &cpuss_0_dw0_0_chan_9_Descriptor_0_config,
};
#endif /* defined (CY_USING_HAL) || defined (CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA)
const mtb_hal_dma_configurator_t cpuss_0_dw0_0_chan_9_hal_config =
{
    .dma_type = MTB_HAL_DMA_DW,
    .channel = cpuss_0_dw0_0_chan_9_CHANNEL,
    .dw_base = cpuss_0_dw0_0_chan_9_HW,
    .dw_descriptor = &cpuss_0_dw0_0_chan_9_Descriptor_0,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_DMA) */

void reserve_cycfg_dmas(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_10_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_11_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_12_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_13_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_14_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_15_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_8_obj);
    cyhal_hwmgr_reserve(&cpuss_0_dw0_0_chan_9_obj);
#endif /* defined (CY_USING_HAL) */
}
