/*******************************************************************************
 * File Name: cycfg_routing.h
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#include "cycfg_notices.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ioss_0_port_1_pin_5_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_4_HSIOM P6_4_CPUSS_SWJ_SWO_TDO
#define ioss_0_port_6_pin_6_HSIOM P6_6_CPUSS_SWJ_SWDIO_TMS
#define ioss_0_port_6_pin_7_HSIOM P6_7_CPUSS_SWJ_SWCLK_TCLK
#define ioss_0_port_7_pin_1_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_7_pin_2_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_7_pin_7_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_1_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_2_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_3_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_4_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_5_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_6_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_8_pin_7_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_14_pin_0_AUX USBDP_USB_USB_DP_PAD
#define ioss_0_port_14_pin_1_AUX USBDM_USB_USB_DM_PAD
#define cpuss_0_dw0_0_chan_8_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA0_TO_PDMA0_TR_IN8
#define cpuss_0_dw0_0_chan_8_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT8_TO_USB_ACK0
#define cpuss_0_dw0_0_chan_9_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA1_TO_PDMA0_TR_IN9
#define cpuss_0_dw0_0_chan_9_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT9_TO_USB_ACK1
#define cpuss_0_dw0_0_chan_10_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA2_TO_PDMA0_TR_IN10
#define cpuss_0_dw0_0_chan_10_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT10_TO_USB_ACK2
#define cpuss_0_dw0_0_chan_11_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA3_TO_PDMA0_TR_IN11
#define cpuss_0_dw0_0_chan_11_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT11_TO_USB_ACK3
#define cpuss_0_dw0_0_chan_12_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA4_TO_PDMA0_TR_IN12
#define cpuss_0_dw0_0_chan_12_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT12_TO_USB_ACK4
#define cpuss_0_dw0_0_chan_13_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA5_TO_PDMA0_TR_IN13
#define cpuss_0_dw0_0_chan_13_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT13_TO_USB_ACK5
#define cpuss_0_dw0_0_chan_14_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA6_TO_PDMA0_TR_IN14
#define cpuss_0_dw0_0_chan_14_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT14_TO_USB_ACK6
#define cpuss_0_dw0_0_chan_15_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_5_USB_DMA7_TO_PDMA0_TR_IN15
#define cpuss_0_dw0_0_chan_15_tr_out_0_TRIGGER_IN TRIG_IN_1TO1_6_PDMA0_TR_OUT15_TO_USB_ACK7
#define usb_0_dma_burstend_0_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT8_TO_USB_ACK0
#define usb_0_dma_burstend_1_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT9_TO_USB_ACK1
#define usb_0_dma_burstend_2_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT10_TO_USB_ACK2
#define usb_0_dma_burstend_3_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT11_TO_USB_ACK3
#define usb_0_dma_burstend_4_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT12_TO_USB_ACK4
#define usb_0_dma_burstend_5_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT13_TO_USB_ACK5
#define usb_0_dma_burstend_6_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT14_TO_USB_ACK6
#define usb_0_dma_burstend_7_TRIGGER_OUT TRIG_OUT_1TO1_6_PDMA0_TR_OUT15_TO_USB_ACK7
#define usb_0_dma_req_0_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA0_TO_PDMA0_TR_IN8
#define usb_0_dma_req_1_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA1_TO_PDMA0_TR_IN9
#define usb_0_dma_req_2_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA2_TO_PDMA0_TR_IN10
#define usb_0_dma_req_3_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA3_TO_PDMA0_TR_IN11
#define usb_0_dma_req_4_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA4_TO_PDMA0_TR_IN12
#define usb_0_dma_req_5_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA5_TO_PDMA0_TR_IN13
#define usb_0_dma_req_6_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA6_TO_PDMA0_TR_IN14
#define usb_0_dma_req_7_TRIGGER_IN TRIG_IN_1TO1_5_USB_DMA7_TO_PDMA0_TR_IN15

void init_cycfg_routing(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_ROUTING_H */
