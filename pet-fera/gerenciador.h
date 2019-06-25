#ifndef  __GERENCIADOR_H__
#define  __GERENCIADOR_H__

#include <iostream>

using namespace std;

class GerenciarFuncionario {
	private:
		int id;
		string nome;
		string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
        void tratador();
        void veterinario();
};

class GerenciarAnimal { //essa classe serve para um suporte aoo menu, é aqui onde será colocada no map o animal
	public:
	    template<typename Classe>
		void animal();
};





#endif
