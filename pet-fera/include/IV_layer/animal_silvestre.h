#ifndef __ANIMAL_SILVESTRE_H__
#define __ANIMAL_SILVESTRE_H__

#include "../III_layer/animal_exotico.h"
#include "../III_layer/animal_nativo.h"

class Animal_silvestre : Animal_exotico, Animal_nativo
{
    // === Atributs ===
    private:
	std::string m_autorizacao_ibama;
		
	public:
	std::string get_autorizacao_ibama(void);
	void set_autorizacao_ibama(std::string autorizacao_ibama);
};
		

#endif
