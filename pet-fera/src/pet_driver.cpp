#include <iostream>
#include "../include/animal.h"
#include "../include/I_layer/anfibio.h"

int main(void)
{
    Anfibio generic;

    generic.setTotalMudas(11111);
    std::cout << "This is the id of animal:" << generic.getTotalMudas() << std::endl;

    return 0x0;
}
