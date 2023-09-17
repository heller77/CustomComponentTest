#include "./CallFactory.h"
#include "./../Factory/Factory.h"
#include <iostream>
#include "windows.h"
typedef Component *(CALLBACK *LPFNDLLFUNC1)(std::string component_name);

Component *CallFactory::Generate(std::string component_name)
{
    auto factoryDLL = LoadLibrary("FactoryDLL");
    if (factoryDLL != NULL)
    {
        auto func = (LPFNDLLFUNC1)GetProcAddress(factoryDLL, "GenerateComponent");
        auto component = func(component_name);

        return component;
    }
    else
    {
        std::cout << "not fine dll" << std::endl;
        return nullptr;
    }
}