#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include "Veterinario.h"
#include "Tratador.h"

class Animal {
	protected:
		int Id;
		std::string classe;
		std::string nome_cientifico;
		char sexo;
		double tamanho;
		std::string dieta;
		Veterinario veterinario;
		Tratador tratador;
		std::string nome_batismo;
	public:
		Animal();
		~Animal();
};
		

#endif