#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>

class Funcionario {
	protected:
		int m_id;
		std::string m_nome;
		std::string m_cpf;
		short int m_idade;
		short int m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;
	public:
                // Getter && Setters
		Funcionario();
		~Funcionario();
		void setId(int id);
		void setNome(std::string nome);
		void setCpf(std::string cpf);
		void setIdade(short int idade);
		void setTipoSanguineo(short int tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(std::string especialidade);

		int getId();
		std::string getNome();
		std::string getCpf();
		short int getIdade();
		short int getTipoSanguineo();
		char getFatorRh();
		std::string getEspecialidade();
};

#endif
