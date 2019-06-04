#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_
#include <string>
#include "Funcionario.h"

class Veterinario : public Funcionario {
	private:
		std::string crmv;
	
	public:
		Veterinario();
		~Veterinario();
};

#endif