#include "./Factory.h"
#include "./../Engine/Component.h"
#include "../UserFolder/Component/AComponent.h"
#include "../UserFolder/Component/BComponent.h"
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