#pragma once
#include "./../Engine/Component.h"
#include <string>
extern "C" __declspec(dllexport) Component *GenerateComponent(std::string component_name);
