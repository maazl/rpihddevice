#pragma once
#include <IL/OMX_Broadcom.h>

#ifdef __cplusplus
extern "C" {
#endif

OMX_API OMX_ERRORTYPE OMX_APIENTRY OMXALSA_GetHandle(OMX_OUT OMX_HANDLETYPE* pHandle,
	OMX_IN const char* cComponentName, OMX_IN OMX_PTR pAppData, OMX_IN OMX_CALLBACKTYPE* pCallBacks);

OMX_API OMX_ERRORTYPE OMX_APIENTRY OMXALSA_FreeHandle(OMX_IN OMX_HANDLETYPE hComponent);

#ifdef __cplusplus
}
#endif

struct OMX_CONFIG_ALSAAUDIODESTINATIONTYPE {
	// OMX_CONFIG_BRCMAUDIODESTINATIONTYPE
  OMX_U32 nSize;
  OMX_VERSIONTYPE nVersion;
  OMX_U8 sName[16];

	const char* device;
	const char* mixer;
	const char* control;
};
