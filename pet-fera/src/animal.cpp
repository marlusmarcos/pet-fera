#include "../include/animal.h"
//#include "../include/Veterinario.h"
//#include "../include/Tratador.h"


Animal::Animal()
{/* empty */}


Animal::~Animal() = default;

// Getter
int Animal::get_id()
{ return this->id; }


std::string Animal::get_classe()
{ return this->classe; }


std::string Animal::get_nome_cientifico()
{ return this->nome_cientifico; }


char Animal::get_sexo()
{ return this->sexo; }


std::string Animal::get_dieta()
{ return this->dieta; }


double Animal::get_tamanho()
{ return this->tamanho; }


std::string Animal::get_nome_batismo()
{ return this->nome_batismo; }


// Setters
void Animal::set_id(int id)
{ this->id = id; }


void Animal::set_classe(std::string classe)
{ this->classe = classe; }


void Animal::set_nome_cientifico(std::string nome_cientifico)
{ this->nome_cientifico = nome_cientifico; }


void Animal::set_sexo(char sexo)
{ this->sexo = sexo; }


void Animal::set_tamanho(double tamanho)
{ this->tamanho = tamanho; }


void Animal::set_dieta(std::string dieta)
{ dieta = dieta; }


void Animal::set_nome_batismo(std::string nome_batismo)
{ this->nome_batismo = nome_batismo; }
