#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <string>

class Funcionario {
	protected:
		int id;
		std::string nome;
		std::string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		std::string especialidade;
	public:
		Funcionario();
		~Funcionario();
		void setId(int id);
		int getId();
		void setNome(std::string nome);
		std::string getNome();
		void setCpf(std::string cpf);
		std::string getCpf();
		void setIdade(short int idade);
		short int getIdade();
		void setTipoSanguineo(short int tipo_sanguineo);
		short int getTipoSanguineo();
		void setFatorRh(char fator_rh);
		char getFatorRh();
		void setEspecialidade(std::string especialidade);
		std::string getEspecialidade();
};

#endif