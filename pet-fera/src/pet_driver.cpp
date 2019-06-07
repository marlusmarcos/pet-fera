#include <iostream>
#include "../include/Animal.h"

int main(void)
{
    Animal generic;

    generic.setId(11111);
    std::cout << "This is the id of animal:" << generic.getId() << std::endl;

    return 0x0;
}
