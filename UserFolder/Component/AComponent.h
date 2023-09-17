#pragma once
#include "./../../Engine/Component.h"

class __declspec(dllexport) AComponent : public Component
{
public:
    void Start() override;
};