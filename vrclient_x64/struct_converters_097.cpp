#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.7/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
struct winRenderModel_TextureMap_t_097 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));

struct winRenderModel_TextureMap_t_097 *struct_RenderModel_TextureMap_t_097_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_097 *win = (struct winRenderModel_TextureMap_t_097 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_097_unwrap(winRenderModel_TextureMap_t_097 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

struct winRenderModel_t_097 {
    uint64_t ulInternalHandle;
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    vr::RenderModel_TextureMap_t diffuseTexture;

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));

struct winRenderModel_t_097 *struct_RenderModel_t_097_wrap(void *l)
{
    struct winRenderModel_t_097 *win = (struct winRenderModel_t_097 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->ulInternalHandle = lin->ulInternalHandle;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTexture = lin->diffuseTexture;
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_097_unwrap(winRenderModel_t_097 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}

struct winVREvent_t_097 {
    vr::EVREventType eventType;
    vr::TrackedDeviceIndex_t trackedDeviceIndex;
    vr::VREvent_Data_t data;
    float eventAgeSeconds;
}  __attribute__ ((ms_struct));

void struct_VREvent_t_097_lin_to_win(void *l, void *w)
{
    struct winVREvent_t_097 *win = (struct winVREvent_t_097 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    win->eventType = lin->eventType;
    win->trackedDeviceIndex = lin->trackedDeviceIndex;
    win->data = lin->data;
    win->eventAgeSeconds = lin->eventAgeSeconds;
}

struct winVRControllerState001_t_097 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));

void struct_VRControllerState001_t_097_lin_to_win(void *l, void *w)
{
    struct winVRControllerState001_t_097 *win = (struct winVRControllerState001_t_097 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}


}
