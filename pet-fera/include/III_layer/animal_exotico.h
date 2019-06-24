#ifndef __ANIMAL_EXOTICO_H__ 
#define __ANIMAL_EXOTICO_H__ 



#include "../../include/II_layer/ave_nodes/ave_exotica.h"
#include "../../include/II_layer/reptil_nodes/reptil_exotico.h"
#include "../../include/II_layer/anfibio_nodes/anfibio_exotico.h"
#include "../../include/II_layer/mamifero_nodes/mamifero_exotico.h"

class Animal_exotico : Ave_exotica, Reptil_exotico, Anfibio_exotico, Mamifero_exotico
{
    protected:
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
