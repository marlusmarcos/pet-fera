#ifndef _TRATADOR_H_
#define _TRATADOR_H_
#include "Funcionario.h"

class Tratador : public Funcionario {
	private:
		int nivel_de_seguranca;
	public:
		Tratador();
		~Tratador();
};

#endif