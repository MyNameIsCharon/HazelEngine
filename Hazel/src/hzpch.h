#pragma once

#define IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#include <glad/glad.h>

#include <iostream>
#include <memory>	
#include <utility>
#include <algorithm>	
#include <functional>

#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "Hazel/Log.h"

#ifdef HZ_PLATFORM_WINDOWS
	#include <Windows.h>
#endif

