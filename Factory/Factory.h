#pragma once
#include "./../Component.h"
#include <string>
extern "C" __declspec(dllexport) Component *GenerateComponent(std::string component_name);
