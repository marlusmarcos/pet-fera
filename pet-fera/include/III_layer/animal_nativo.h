#ifndef __ANIMAL_NATIVO_H__ 
#define __ANIMAL_NATIVO_H__ 

#include "../animal.h"

class Animal_nativo
{
    private:
	std::string m_uf_origem;
	std::string m_autorization;

    public:
    // Constructors && Destructors
    Animal_nativo();
    ~Animal_nativo();

    // Getters && setters
    std::string get_uf_origem(void);
    std::string get_autorization(void);
    void set_uf_origem(std::string uf_origem);
    void set_autorization(std::string autorization);

};

#endif
