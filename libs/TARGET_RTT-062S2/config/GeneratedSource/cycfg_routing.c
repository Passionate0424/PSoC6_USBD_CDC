/*******************************************************************************
 * File Name: cycfg_routing.c
 *
 * Description:
 * Establishes all necessary connections between hardware elements.
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

#include "cycfg_routing.h"
#include "cy_trigmux.h"
#include "stdbool.h"
#include "cy_device_headers.h"

void init_cycfg_routing(void)
{
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA0_TO_PDMA0_TR_IN8, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA1_TO_PDMA0_TR_IN9, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA2_TO_PDMA0_TR_IN10, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA3_TO_PDMA0_TR_IN11, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA4_TO_PDMA0_TR_IN12, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA5_TO_PDMA0_TR_IN13, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA6_TO_PDMA0_TR_IN14, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_5_USB_DMA7_TO_PDMA0_TR_IN15, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT10_TO_USB_ACK2, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT11_TO_USB_ACK3, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT12_TO_USB_ACK4, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT13_TO_USB_ACK5, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT14_TO_USB_ACK6, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT15_TO_USB_ACK7, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT8_TO_USB_ACK0, false, TRIGGER_TYPE_EDGE);
    Cy_TrigMux_Select(TRIG_OUT_1TO1_6_PDMA0_TR_OUT9_TO_USB_ACK1, false, TRIGGER_TYPE_EDGE);
    HSIOM->AMUX_SPLIT_CTL[2] = HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_AA_SL_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_AA_SR_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_BB_SL_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_BB_SR_Msk;
    HSIOM->AMUX_SPLIT_CTL[4] = HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_AA_SL_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_AA_SR_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_BB_SL_Msk |
        HSIOM_V2_AMUX_SPLIT_CTL_SWITCH_BB_SR_Msk;
}
