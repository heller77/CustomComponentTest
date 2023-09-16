#pragma once
#include <string>
#include "Component.h"
class CallFactory
{
private:
public:
    static Component *Generate(std::string component_name);
};
