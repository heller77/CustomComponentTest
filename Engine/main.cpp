#include <iostream>
#include "CallFactory.h"
int main()
{
    auto acomponent = CallFactory::Generate("AComponent");
    acomponent->Start();
    auto bcomponent = CallFactory::Generate("BComponent");
    bcomponent->Start();
}