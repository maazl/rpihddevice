#pragma once
#include <IL/OMX_Core.h>

#ifdef __cplusplus
extern "C" {
#endif

OMX_API OMX_ERRORTYPE OMX_APIENTRY OMXALSA_GetHandle(OMX_OUT OMX_HANDLETYPE* pHandle,
	OMX_IN const char* cComponentName, OMX_IN OMX_PTR pAppData, OMX_IN OMX_CALLBACKTYPE* pCallBacks);

OMX_API OMX_ERRORTYPE OMX_APIENTRY OMXALSA_FreeHandle(OMX_IN OMX_HANDLETYPE hComponent);

#ifdef __cplusplus
}
#endif
