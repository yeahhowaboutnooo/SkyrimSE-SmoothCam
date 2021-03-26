#pragma once
#include "skse64/PluginManager.h"
#include "skee64/IPluginInterface.h"
#include "skee64/NiTransformInterface.h"

#include "camera.h"
#include "detours.h"
#include "papyrus.h"

#include "render/d3d_context.h"
#ifdef WITH_D2D
#   include "render/d2d.h"
#endif