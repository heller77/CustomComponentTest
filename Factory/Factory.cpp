#include "./Factory.h"
#include "./../Component.h"
#include "./Component/AComponent.h"
#include "./Component/BComponent.h"
Component *GenerateComponent(std::string component_name)
{
    Component *returnvalue;
    if (component_name == "AComponent")
    {
        returnvalue = new AComponent();
    }
    else if (component_name == "BComponent")
    {
        returnvalue = new BComponent();
    }
    return returnvalue;
}