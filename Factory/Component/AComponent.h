#pragma once
#include "./../../Component.h"

class __declspec(dllexport) AComponent : public Component
{
public:
    void Start() override;
};