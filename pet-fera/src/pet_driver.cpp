#include <iostream>
#include "../include/animal.h"
#include "../include/I_layer/anfibio.h"

int main(void)
{
    Animal generic;

    generic.set_id(11111);
    std::cout << "This is the id of animal:" << generic.get_id() << std::endl;

    return 0x0;
}
