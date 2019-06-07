#include "../include/Animal.h"
#include "../include/Veterinario.h"
#include "../include/Tratador.h"


Animal::Animal()
{/* empty */}


Animal::~Animal() = default;


// Getter
int Animal::getId()
{ return this->id; }


std::string Animal::getClasse()
{ return this->classe; }


std::string Animal::getNomeCientifico()
{ return this->nome_cientifico; }


char Animal::getSexo()
{ return this->sexo; }


std::string Animal::getDieta()
{ return this->dieta; }


double Animal::getTamanho()
{ return this->tamanho; }


std::string Animal::getNomeBatismo()
{ return this->nome_batismo; }


// Setters
void Animal::setId(int id)
{ this->id = id; }


void Animal::setClasse(std::string classe)
{ this->classe = classe; }


void Animal::setNomeCientifico(std::string nome_cientifico)
{ this->nome_cientifico = nome_cientifico; }


void Animal::setSexo(char sexo)
{ this->sexo = sexo; }


void Animal::setTamanho(double tamanho)
{ this->tamanho = tamanho; }


void Animal::setDieta(std::string dieta)
{ this->dieta = dieta; }


void Animal::setNomeBatismo(std::string nome_batismo)
{ this->nome_batismo = nome_batismo; }
