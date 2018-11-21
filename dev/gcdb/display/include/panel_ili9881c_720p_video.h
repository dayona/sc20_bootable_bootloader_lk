/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_ILI9881C_720P_VIDEO_H_
#define _PANEL_ILI9881C_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config ili9881c_720p_video_panel_data = {
	"qcom,mdss_dsi_ili9881c_720p_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution ili9881c_720p_video_panel_res = {
	720, 1280, 52, 100, 36, 0, 8, 20, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info ili9881c_720p_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char ili9881c_720p_video_on_cmd0[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xFF, 0x98, 0x81, 0x03,
};

static char ili9881c_720p_video_on_cmd1[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x01, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd2[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x02, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd3[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x03, 0x73, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd4[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x04, 0x03, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd5[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x05, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd6[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x06, 0x06, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd7[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x07, 0x06, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd8[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x08, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd9[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x09, 0x18, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd10[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0A, 0x04, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd11[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0B, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd12[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0C, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd13[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0D, 0x03, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd14[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0E, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd15[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x0F, 0x25, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd16[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x10, 0x25, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd17[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x11, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd18[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x12, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd19[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x13, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd20[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x14, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd21[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x15, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd22[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x16, 0x0c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd23[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x17, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd24[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x18, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd25[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x19, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd26[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1A, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd27[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1B, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd28[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1C, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd29[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1D, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd30[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1E, 0xC0, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd31[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x1F, 0x80, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd32[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x20, 0x04, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd33[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x21, 0x01, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd34[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x22, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd35[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x23, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd36[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x24, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd37[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x25, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd38[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x26, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd39[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x27, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd40[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x28, 0x33, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd41[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x29, 0x03, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd42[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2A, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd43[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2B, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd44[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2C, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd45[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2D, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd46[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2E, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd47[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x2F, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd48[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x30, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd49[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x31, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd50[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x32, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd51[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x33, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd52[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x34, 0x04, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd53[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x35, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd54[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x36, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd55[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x37, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd56[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x38, 0x3c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd57[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x39, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd58[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3A, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd59[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3B, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd60[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3C, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd61[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3D, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd62[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3E, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd63[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3F, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd64[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x40, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd65[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x41, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd66[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x42, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd67[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x43, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd68[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x44, 0x00, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd69[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x50, 0x01, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd70[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x51, 0x23, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd71[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x52, 0x45, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd72[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x53, 0x67, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd73[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x54, 0x89, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd74[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x55, 0xab, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd75[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x56, 0x01, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd76[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x57, 0x23, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd77[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x58, 0x45, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd78[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x59, 0x67, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd79[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5A, 0x89, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd80[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5B, 0xab, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd81[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5C, 0xcd, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd82[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5D, 0xef, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd83[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5E, 0x11, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd84[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x5F, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd85[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x60, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd86[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x61, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd87[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x62, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd88[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x63, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd89[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x64, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd90[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x65, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd91[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x66, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd92[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x67, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd93[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x68, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd94[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x69, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd95[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6A, 0x0c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd96[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6B, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd97[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6C, 0x0f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd98[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6D, 0x0e, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd99[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6E, 0x0d, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd100[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6F, 0x06, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd101[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x70, 0x07, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd102[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x71, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd103[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x72, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd104[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x73, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd105[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x74, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd106[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x75, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd107[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x76, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd108[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x77, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd109[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x78, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd110[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x79, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd111[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7A, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd112[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7B, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd113[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7C, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd114[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7D, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd115[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7E, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd116[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x7F, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd117[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x80, 0x0c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd118[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x81, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd119[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x82, 0x0f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd120[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x83, 0x0e, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd121[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x84, 0x0d, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd122[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x85, 0x06, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd123[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x86, 0x07, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd124[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x87, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd125[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x88, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd126[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x89, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd127[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x8A, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd128[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xFF, 0x98, 0x81, 0x04,
};

static char ili9881c_720p_video_on_cmd129[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6c, 0x15, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd130[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6e, 0x22, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd131[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x6f, 0x33, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd132[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x3a, 0xa4, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd133[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x8d, 0x0d, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd134[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x87, 0xba, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd135[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x26, 0x76, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd136[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xb2, 0xd1, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd137[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xFF, 0x98, 0x81, 0x01,
};

static char ili9881c_720p_video_on_cmd138[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x22, 0x0a, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd139[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x53, 0xbe, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd140[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x55, 0xa7, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd141[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x50, 0x74, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd142[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x51, 0x74, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd143[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x31, 0x02, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd144[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x60, 0x14, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd145[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa0, 0x15, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd146[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa1, 0x26, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd147[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa2, 0x2b, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd148[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa3, 0x14, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd149[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa4, 0x17, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd150[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa5, 0x2c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd151[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa6, 0x20, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd152[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa7, 0x21, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd153[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa8, 0x95, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd154[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xa9, 0x1d, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd155[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xaa, 0x27, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd156[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xab, 0x89, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd157[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xac, 0x1a, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd158[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xad, 0x18, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd159[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xae, 0x4b, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd160[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xaf, 0x21, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd161[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xb0, 0x26, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd162[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xb1, 0x60, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd163[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xb2, 0x71, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd164[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xb3, 0x3f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd165[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc0, 0x05, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd166[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc1, 0x26, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd167[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc2, 0x3f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd168[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc3, 0x0f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd169[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc4, 0x14, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd170[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc5, 0x27, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd171[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc6, 0x1a, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd172[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc7, 0x1e, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd173[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc8, 0x9e, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd174[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc9, 0x1a, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd175[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xca, 0x29, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd176[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcb, 0x82, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd177[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcc, 0x18, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd178[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcd, 0x16, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd179[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xce, 0x4c, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd180[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcf, 0x1f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd181[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xd0, 0x28, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd182[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xd1, 0x53, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd183[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xd2, 0x62, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd184[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xd3, 0x3f, 0xFF, 0xFF,
};

static char ili9881c_720p_video_on_cmd185[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xFF, 0x98, 0x81, 0x00,
};

static char ili9881c_720p_video_on_cmd186[] = {
	0x11, 0x00, 0x05, 0x80
};

static char ili9881c_720p_video_on_cmd187[] = {
	0x29, 0x00, 0x05, 0x80
};

static char ili9881c_720p_video_on_cmd188[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x35, 0x00, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd ili9881c_720p_video_on_command[] = {
	{0x8, ili9881c_720p_video_on_cmd0, 0x00},
	{0x8, ili9881c_720p_video_on_cmd1, 0x00},
	{0x8, ili9881c_720p_video_on_cmd2, 0x00},
	{0x8, ili9881c_720p_video_on_cmd3, 0x00},
	{0x8, ili9881c_720p_video_on_cmd4, 0x00},
	{0x8, ili9881c_720p_video_on_cmd5, 0x00},
	{0x8, ili9881c_720p_video_on_cmd6, 0x00},
	{0x8, ili9881c_720p_video_on_cmd7, 0x00},
	{0x8, ili9881c_720p_video_on_cmd8, 0x00},
	{0x8, ili9881c_720p_video_on_cmd9, 0x00},
	{0x8, ili9881c_720p_video_on_cmd10, 0x00},
	{0x8, ili9881c_720p_video_on_cmd11, 0x00},
	{0x8, ili9881c_720p_video_on_cmd12, 0x00},
	{0x8, ili9881c_720p_video_on_cmd13, 0x00},
	{0x8, ili9881c_720p_video_on_cmd14, 0x00},
	{0x8, ili9881c_720p_video_on_cmd15, 0x00},
	{0x8, ili9881c_720p_video_on_cmd16, 0x00},
	{0x8, ili9881c_720p_video_on_cmd17, 0x00},
	{0x8, ili9881c_720p_video_on_cmd18, 0x00},
	{0x8, ili9881c_720p_video_on_cmd19, 0x00},
	{0x8, ili9881c_720p_video_on_cmd20, 0x00},
	{0x8, ili9881c_720p_video_on_cmd21, 0x00},
	{0x8, ili9881c_720p_video_on_cmd22, 0x00},
	{0x8, ili9881c_720p_video_on_cmd23, 0x00},
	{0x8, ili9881c_720p_video_on_cmd24, 0x00},
	{0x8, ili9881c_720p_video_on_cmd25, 0x00},
	{0x8, ili9881c_720p_video_on_cmd26, 0x00},
	{0x8, ili9881c_720p_video_on_cmd27, 0x00},
	{0x8, ili9881c_720p_video_on_cmd28, 0x00},
	{0x8, ili9881c_720p_video_on_cmd29, 0x00},
	{0x8, ili9881c_720p_video_on_cmd30, 0x00},
	{0x8, ili9881c_720p_video_on_cmd31, 0x00},
	{0x8, ili9881c_720p_video_on_cmd32, 0x00},
	{0x8, ili9881c_720p_video_on_cmd33, 0x00},
	{0x8, ili9881c_720p_video_on_cmd34, 0x00},
	{0x8, ili9881c_720p_video_on_cmd35, 0x00},
	{0x8, ili9881c_720p_video_on_cmd36, 0x00},
	{0x8, ili9881c_720p_video_on_cmd37, 0x00},
	{0x8, ili9881c_720p_video_on_cmd38, 0x00},
	{0x8, ili9881c_720p_video_on_cmd39, 0x00},
	{0x8, ili9881c_720p_video_on_cmd40, 0x00},
	{0x8, ili9881c_720p_video_on_cmd41, 0x00},
	{0x8, ili9881c_720p_video_on_cmd42, 0x00},
	{0x8, ili9881c_720p_video_on_cmd43, 0x00},
	{0x8, ili9881c_720p_video_on_cmd44, 0x00},
	{0x8, ili9881c_720p_video_on_cmd45, 0x00},
	{0x8, ili9881c_720p_video_on_cmd46, 0x00},
	{0x8, ili9881c_720p_video_on_cmd47, 0x00},
	{0x8, ili9881c_720p_video_on_cmd48, 0x00},
	{0x8, ili9881c_720p_video_on_cmd49, 0x00},
	{0x8, ili9881c_720p_video_on_cmd50, 0x00},
	{0x8, ili9881c_720p_video_on_cmd51, 0x00},
	{0x8, ili9881c_720p_video_on_cmd52, 0x00},
	{0x8, ili9881c_720p_video_on_cmd53, 0x00},
	{0x8, ili9881c_720p_video_on_cmd54, 0x00},
	{0x8, ili9881c_720p_video_on_cmd55, 0x00},
	{0x8, ili9881c_720p_video_on_cmd56, 0x00},
	{0x8, ili9881c_720p_video_on_cmd57, 0x00},
	{0x8, ili9881c_720p_video_on_cmd58, 0x00},
	{0x8, ili9881c_720p_video_on_cmd59, 0x00},
	{0x8, ili9881c_720p_video_on_cmd60, 0x00},
	{0x8, ili9881c_720p_video_on_cmd61, 0x00},
	{0x8, ili9881c_720p_video_on_cmd62, 0x00},
	{0x8, ili9881c_720p_video_on_cmd63, 0x00},
	{0x8, ili9881c_720p_video_on_cmd64, 0x00},
	{0x8, ili9881c_720p_video_on_cmd65, 0x00},
	{0x8, ili9881c_720p_video_on_cmd66, 0x00},
	{0x8, ili9881c_720p_video_on_cmd67, 0x00},
	{0x8, ili9881c_720p_video_on_cmd68, 0x00},
	{0x8, ili9881c_720p_video_on_cmd69, 0x00},
	{0x8, ili9881c_720p_video_on_cmd70, 0x00},
	{0x8, ili9881c_720p_video_on_cmd71, 0x00},
	{0x8, ili9881c_720p_video_on_cmd72, 0x00},
	{0x8, ili9881c_720p_video_on_cmd73, 0x00},
	{0x8, ili9881c_720p_video_on_cmd74, 0x00},
	{0x8, ili9881c_720p_video_on_cmd75, 0x00},
	{0x8, ili9881c_720p_video_on_cmd76, 0x00},
	{0x8, ili9881c_720p_video_on_cmd77, 0x00},
	{0x8, ili9881c_720p_video_on_cmd78, 0x00},
	{0x8, ili9881c_720p_video_on_cmd79, 0x00},
	{0x8, ili9881c_720p_video_on_cmd80, 0x00},
	{0x8, ili9881c_720p_video_on_cmd81, 0x00},
	{0x8, ili9881c_720p_video_on_cmd82, 0x00},
	{0x8, ili9881c_720p_video_on_cmd83, 0x00},
	{0x8, ili9881c_720p_video_on_cmd84, 0x00},
	{0x8, ili9881c_720p_video_on_cmd85, 0x00},
	{0x8, ili9881c_720p_video_on_cmd86, 0x00},
	{0x8, ili9881c_720p_video_on_cmd87, 0x00},
	{0x8, ili9881c_720p_video_on_cmd88, 0x00},
	{0x8, ili9881c_720p_video_on_cmd89, 0x00},
	{0x8, ili9881c_720p_video_on_cmd90, 0x00},
	{0x8, ili9881c_720p_video_on_cmd91, 0x00},
	{0x8, ili9881c_720p_video_on_cmd92, 0x00},
	{0x8, ili9881c_720p_video_on_cmd93, 0x00},
	{0x8, ili9881c_720p_video_on_cmd94, 0x00},
	{0x8, ili9881c_720p_video_on_cmd95, 0x00},
	{0x8, ili9881c_720p_video_on_cmd96, 0x00},
	{0x8, ili9881c_720p_video_on_cmd97, 0x00},
	{0x8, ili9881c_720p_video_on_cmd98, 0x00},
	{0x8, ili9881c_720p_video_on_cmd99, 0x00},
	{0x8, ili9881c_720p_video_on_cmd100, 0x00},
	{0x8, ili9881c_720p_video_on_cmd101, 0x00},
	{0x8, ili9881c_720p_video_on_cmd102, 0x00},
	{0x8, ili9881c_720p_video_on_cmd103, 0x00},
	{0x8, ili9881c_720p_video_on_cmd104, 0x00},
	{0x8, ili9881c_720p_video_on_cmd105, 0x00},
	{0x8, ili9881c_720p_video_on_cmd106, 0x00},
	{0x8, ili9881c_720p_video_on_cmd107, 0x00},
	{0x8, ili9881c_720p_video_on_cmd108, 0x00},
	{0x8, ili9881c_720p_video_on_cmd109, 0x00},
	{0x8, ili9881c_720p_video_on_cmd110, 0x00},
	{0x8, ili9881c_720p_video_on_cmd111, 0x00},
	{0x8, ili9881c_720p_video_on_cmd112, 0x00},
	{0x8, ili9881c_720p_video_on_cmd113, 0x00},
	{0x8, ili9881c_720p_video_on_cmd114, 0x00},
	{0x8, ili9881c_720p_video_on_cmd115, 0x00},
	{0x8, ili9881c_720p_video_on_cmd116, 0x00},
	{0x8, ili9881c_720p_video_on_cmd117, 0x00},
	{0x8, ili9881c_720p_video_on_cmd118, 0x00},
	{0x8, ili9881c_720p_video_on_cmd119, 0x00},
	{0x8, ili9881c_720p_video_on_cmd120, 0x00},
	{0x8, ili9881c_720p_video_on_cmd121, 0x00},
	{0x8, ili9881c_720p_video_on_cmd122, 0x00},
	{0x8, ili9881c_720p_video_on_cmd123, 0x00},
	{0x8, ili9881c_720p_video_on_cmd124, 0x00},
	{0x8, ili9881c_720p_video_on_cmd125, 0x00},
	{0x8, ili9881c_720p_video_on_cmd126, 0x00},
	{0x8, ili9881c_720p_video_on_cmd127, 0x00},
	{0x8, ili9881c_720p_video_on_cmd128, 0x00},
	{0x8, ili9881c_720p_video_on_cmd129, 0x00},
	{0x8, ili9881c_720p_video_on_cmd130, 0x00},
	{0x8, ili9881c_720p_video_on_cmd131, 0x00},
	{0x8, ili9881c_720p_video_on_cmd132, 0x00},
	{0x8, ili9881c_720p_video_on_cmd133, 0x00},
	{0x8, ili9881c_720p_video_on_cmd134, 0x00},
	{0x8, ili9881c_720p_video_on_cmd135, 0x00},
	{0x8, ili9881c_720p_video_on_cmd136, 0x00},
	{0x8, ili9881c_720p_video_on_cmd137, 0x00},
	{0x8, ili9881c_720p_video_on_cmd138, 0x00},
	{0x8, ili9881c_720p_video_on_cmd139, 0x00},
	{0x8, ili9881c_720p_video_on_cmd140, 0x00},
	{0x8, ili9881c_720p_video_on_cmd141, 0x00},
	{0x8, ili9881c_720p_video_on_cmd142, 0x00},
	{0x8, ili9881c_720p_video_on_cmd143, 0x00},
	{0x8, ili9881c_720p_video_on_cmd144, 0x00},
	{0x8, ili9881c_720p_video_on_cmd145, 0x00},
	{0x8, ili9881c_720p_video_on_cmd146, 0x00},
	{0x8, ili9881c_720p_video_on_cmd147, 0x00},
	{0x8, ili9881c_720p_video_on_cmd148, 0x00},
	{0x8, ili9881c_720p_video_on_cmd149, 0x00},
	{0x8, ili9881c_720p_video_on_cmd150, 0x00},
	{0x8, ili9881c_720p_video_on_cmd151, 0x00},
	{0x8, ili9881c_720p_video_on_cmd152, 0x00},
	{0x8, ili9881c_720p_video_on_cmd153, 0x00},
	{0x8, ili9881c_720p_video_on_cmd154, 0x00},
	{0x8, ili9881c_720p_video_on_cmd155, 0x00},
	{0x8, ili9881c_720p_video_on_cmd156, 0x00},
	{0x8, ili9881c_720p_video_on_cmd157, 0x00},
	{0x8, ili9881c_720p_video_on_cmd158, 0x00},
	{0x8, ili9881c_720p_video_on_cmd159, 0x00},
	{0x8, ili9881c_720p_video_on_cmd160, 0x00},
	{0x8, ili9881c_720p_video_on_cmd161, 0x00},
	{0x8, ili9881c_720p_video_on_cmd162, 0x00},
	{0x8, ili9881c_720p_video_on_cmd163, 0x00},
	{0x8, ili9881c_720p_video_on_cmd164, 0x00},
	{0x8, ili9881c_720p_video_on_cmd165, 0x00},
	{0x8, ili9881c_720p_video_on_cmd166, 0x00},
	{0x8, ili9881c_720p_video_on_cmd167, 0x00},
	{0x8, ili9881c_720p_video_on_cmd168, 0x00},
	{0x8, ili9881c_720p_video_on_cmd169, 0x00},
	{0x8, ili9881c_720p_video_on_cmd170, 0x00},
	{0x8, ili9881c_720p_video_on_cmd171, 0x00},
	{0x8, ili9881c_720p_video_on_cmd172, 0x00},
	{0x8, ili9881c_720p_video_on_cmd173, 0x00},
	{0x8, ili9881c_720p_video_on_cmd174, 0x00},
	{0x8, ili9881c_720p_video_on_cmd175, 0x00},
	{0x8, ili9881c_720p_video_on_cmd176, 0x00},
	{0x8, ili9881c_720p_video_on_cmd177, 0x00},
	{0x8, ili9881c_720p_video_on_cmd178, 0x00},
	{0x8, ili9881c_720p_video_on_cmd179, 0x00},
	{0x8, ili9881c_720p_video_on_cmd180, 0x00},
	{0x8, ili9881c_720p_video_on_cmd181, 0x00},
	{0x8, ili9881c_720p_video_on_cmd182, 0x00},
	{0x8, ili9881c_720p_video_on_cmd183, 0x00},
	{0x8, ili9881c_720p_video_on_cmd184, 0x00},
	{0x8, ili9881c_720p_video_on_cmd185, 0x00},
	{0x4, ili9881c_720p_video_on_cmd186, 0x78},
	{0x4, ili9881c_720p_video_on_cmd187, 0x0A},
	{0x8, ili9881c_720p_video_on_cmd188, 0x00}
};

#define ILI9881C_720P_VIDEO_ON_COMMAND 189

static char ili9881c_720p_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char ili9881c_720p_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd ili9881c_720p_video_off_command[] = {
	{0x4, ili9881c_720p_videooff_cmd0, 0x32},
	{0x4, ili9881c_720p_videooff_cmd1, 0x78}
};

#define ILI9881C_720P_VIDEO_OFF_COMMAND 2


static struct command_state ili9881c_720p_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info ili9881c_720p_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info ili9881c_720p_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration ili9881c_720p_video_lane_config = {
	4, 0, 1, 1, 1, 1
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t ili9881c_720p_video_timings[] = {
	0x7a, 0x1a, 0x12, 0x00, 0x3e, 0x42, 0x16, 0x1e, 0x14, 0x03, 0x04, 0x00
};

static struct panel_timing ili9881c_720p_video_timing_info = {
	0, 4, 0x0A, 0x1D
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence ili9881c_720p_video_reset_seq = {
	{1, 0, 1, }, {20, 2, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight ili9881c_720p_video_backlight = {
	1, 1, 4095, 100, 0, "PMIC_8941"
};

#define ILI9881C_720P_VIDEO_SIGNATURE 0x9800

#endif /*_PANEL_ILI9881C_720P_VIDEO_H_*/
