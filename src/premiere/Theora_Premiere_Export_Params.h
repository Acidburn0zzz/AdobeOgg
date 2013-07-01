///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2013, Brendan Bolles
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *	   Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *	   Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------------
//
// Theora plug-in for Premiere
//
// by Brendan Bolles <brendan@fnordware.com>
//
// ------------------------------------------------------------------------


#ifndef THEORA_PREMIERE_EXPORT_PARAMS_H
#define THEORA_PREMIERE_EXPORT_PARAMS_H


#include "Theora_Premiere_Export.h"

extern "C" {
//#include "vpx/vpx_encoder.h"
}

typedef enum {
	WEBM_CODEC_VP8 = 0,
	WEBM_CODEC_VP9
} WebM_Video_Codec;

typedef enum {
	WEBM_METHOD_QUALITY = 0,
	WEBM_METHOD_BITRATE,
	WEBM_METHOD_VBR
} WebM_Video_Method;

typedef enum {
	WEBM_ENCODING_REALTIME = 0,
	WEBM_ENCODING_GOOD,
	WEBM_ENCODING_BEST
} WebM_Video_Encoding;


#define ADBEVideoAlpha		"ADBEVideoAlpha"


#define WebMPluginVersion	"WebMPluginVersion"

#define ADBEVideoMatchSource "ADBEVideoMatchSource"

#define WebMVideoCodec		"WebMVideoCodec"
#define WebMVideoMethod		"WebMVideoMethod"
#define WebMVideoQuality	"WebMVideoQuality"
#define WebMVideoBitrate	"WebMVideoBitrate"
#define WebMVideoEncoding	"WebMVideoEncoding"

#define WebMCustomGroup		"WebMCustomGroup"
#define WebMCustomArgs		"WebMCustomArgs"


typedef enum {
	OGG_QUALITY = 0,
	OGG_BITRATE
} Ogg_Method;

#define WebMAudioMethod	"WebMAudioMethod"
#define WebMAudioQuality	"WebMAudioQuality"
#define WebMAudioBitrate	"WebMAudioBitrate"




prMALError
exSDKQueryOutputSettings(
	exportStdParms				*stdParmsP,
	exQueryOutputSettingsRec	*outputSettingsP);

prMALError
exSDKGenerateDefaultParams(
	exportStdParms				*stdParms, 
	exGenerateDefaultParamRec	*generateDefaultParamRec);

prMALError
exSDKPostProcessParams(
	exportStdParms			*stdParmsP, 
	exPostProcessParamsRec	*postProcessParamsRecP);

prMALError
exSDKGetParamSummary(
	exportStdParms			*stdParmsP, 
	exParamSummaryRec		*summaryRecP);

prMALError
exSDKValidateParamChanged (
	exportStdParms		*stdParmsP, 
	exParamChangedRec	*validateParamChangedRecP);
	

//bool ConfigureEncoderPre(vpx_codec_enc_cfg_t &config, const char *txt);

//bool ConfigureEncoderPost(vpx_codec_ctx_t *encoder, const char *txt);


#endif // THEORA_PREMIERE_EXPORT_PARAMS_H
