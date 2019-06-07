#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
#include "../include/Veterinario.h"
#include "../include/Tratador.h"

class Animal
{
    // === Atributs ===
	protected:
		int id;
		std::string classe;
		std::string nome_cientifico;
		char sexo;
		double tamanho;
		std::string dieta;
		std::string nome_batismo;
		//TODO thiago ta fazendo essas classes.
		//Veterinario veterinario;
		//Tratador tratador;
		
	public:
		/// Constructor
		Animal();
		// TODO Copy constructor
		
		/// Destructor
		~Animal();

		/// Getters
		int getId();
		std::string getClasse();
		std::string getNomeCientifico();
		char getSexo();
		double getTamanho();
		std::string getDieta();
		std::string getNomeBatismo();

		/// Setters
		void setId(int id);
		void setClasse(std::string classe);
		void setNomeCientifico(std::string nome_cientifico);
		void setSexo(char sexo);
		void setTamanho(double tamanho);
		void setDieta(std::string dieta);
		void setNomeBatismo(std::string nome_batismo);
};
		

#endif
