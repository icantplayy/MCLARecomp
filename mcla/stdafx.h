#pragma once

#ifdef _WIN32
#include <windows.h>
#define NOMINMAX
#elif __linux__
#include <unistd.h>
#include <pwd.h>
#endif

#include <ppc/ppc_recomp_shared.h>

#include <algorithm>
#include <mutex>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>
#include <cassert>
#include <chrono>
#include <span>
#include <xbox.h>