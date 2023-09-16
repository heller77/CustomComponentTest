#include <iostream>
#include "CallFactory.h"
int main()
{
    std::cout << "hello3 " << std::endl;
    auto acomponent = CallFactory::Generate("AComponent");
    acomponent->Start();
}