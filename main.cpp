#include <iostream>
#include "CoolProp.h"

int main()
{
    std::cout << CoolProp::PropsSI("T","P",101325,"Q",0,"Water") << std::endl;
    return 1;
}
