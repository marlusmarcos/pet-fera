#ifndef __ANIMAL_EXOTICO_H__ 
#define __ANIMAL_EXOTICO_H__ 

#include "../animal.h"

class Animal_exotico
{
    private:
	std::string m_pais_origem;

    public:
    // Constructors && Destructors
    Animal_exotico();
    ~Animal_exotico();

    // Getters && setters
    std::string get_pais_origem(void);
    void set_pais_origem(std::string uf_origem);

};

#endif
