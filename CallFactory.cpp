#include "./CallFactory.h"
#include "./Factory/Factory.h"
#include <iostream>
Component *CallFactory::Generate(std::string component_name)
{
    std::cout << "generate call from CallFactory" << std::endl;
    return GenerateComponent(component_name);
}