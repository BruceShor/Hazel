#pragma once
#define GLFW_STATIC

#include <iostream>
#include <functional>
#include <memory>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

#include "Hazel/Log.h"

#ifdef HZ_PLATFORM_WINDOWS
	#include <Windows.h>
#endif