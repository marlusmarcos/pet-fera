#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
// TODO include tratador librarys in animal class
//#include "../include/Veterinario.h"
//#include "../include/Tratador.h"

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
		int get_id();
		std::string get_classe();
		std::string get_nome_cientifico();
		char get_sexo();
		double get_tamanho();
		std::string get_dieta();
		std::string get_nome_batismo();

		/// Setters
		void set_id(int id);
		void set_classe(std::string classe);
		void set_nome_cientifico(std::string nome_cientifico);
		void set_sexo(char sexo);
		void set_tamanho(double tamanho);
		void set_dieta(std::string dieta);
		void set_nome_batismo(std::string nome_batismo);
};
		

#endif
