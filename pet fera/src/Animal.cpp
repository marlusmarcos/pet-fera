#include "Animal.h"
#include "Veterinario.h"
#include "Tratador.h"

Animal::Animal(){};
Animal::~Animal(){};

void Animal::setId(int id){
	this->id = id;
}
int Animal::getId(){
	return this->id;
}
void Animal::setClasse(std::string classe){
	this->classe = classe;
}
std::string Animal::getClasse(){
	return this->classe;
}
void Animal::setNomeCientifico(std::string nome_cientifico){
	this->nome_cientifico = nome_cientifico;
}
std::string Animal::getNomeCientifico(){
	return this->nome_cientifico;
}
void Animal::setSexo(char sexo){
	this->sexo = sexo;
}
char Animal::getSexo(){
	return this->sexo;
}
void Animal::setTamanho(double tamanho){
	this->tamanho = tamanho;
}
double Animal::getTamanho(){
	return this->tamanho;
}
void Animal::setDieta(std::string dieta){
	this->dieta = dieta;
}
std::string Animal::getDieta(){
	return this->dieta;
}
void Animal::setNomeBatismo(std::string nome_batismo){
	this->nome_batismo = nome_batismo;
}
std::string Animal::getNomeBatismo(){
	return this->nome_batismo;
}