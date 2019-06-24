#ifndef __ANIMAL_NATIVO_H__ 
#define __ANIMAL_NATIVO_H__ 


#include "../../include/II_layer/ave_nodes/ave_nativa.h"
#include "../../include/II_layer/reptil_nodes/reptil_nativo.h"
#include "../../include/II_layer/anfibio_nodes/anfibio_nativo.h"
#include "../../include/II_layer/mamifero_nodes/mamifero_nativo.h"


class Animal_nativo : Ave_nativa, Mamifero_nativo, Anfibio_nativo, Reptil_nativo
{
    protected:
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
