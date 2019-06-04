#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include "Veterinario.h"
#include "Tratador.h"

class Animal {
	protected:
		int id;
		std::string classe;
		std::string nome_cientifico;
		char sexo;
		double tamanho;
		std::string dieta;
		std::string nome_batismo;
		Veterinario veterinario;
		Tratador tratador;
		
	public:
		Animal();
		~Animal();
		void setId(int id);
		int getId();
		void setClasse(std::string classe);
		std::string getClasse();
		void setNomeCientifico(std::string nome_cientifico);
		std::string getNomeCientifico();
		void setSexo(char sexo);
		char getSexo();
		void setTamanho(double tamanho);
		double getTamanho();
		void setDieta(std::string dieta);
		std::string getDieta();
		void setNomeBatismo(std::string nome_batismo);
		std::string getNomeBatismo();
};
		

#endif
