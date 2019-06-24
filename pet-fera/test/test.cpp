#include <iostream>
#include <fstream>

int main(void)
{
    std::ifstream read;
    std::ofstream write;
    std::string recive;
    std::string in_the_file;

    write.open("file.txt");
    read.open("./file.txt");

    std::cout << "Type any text: ";

    std::getline(std::cin, recive);
    write << recive;


    // check the heath of file
    // std::cout << ">>> Fail in open file! <<<" << std::endl; 
    

    write << " mama aqui o glub glub";

    //    std::getline(read, in_the_file);
    std::getline(read, in_the_file);
    std::cout << in_the_file << std::endl;

    
    read.close();
    write.close();
    return 0x0;
}
