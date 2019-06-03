#include "Funcionario.h"

Funcionario::Funcionario(){};
Funcionario::~Funcionario(){};

void Funcionario::setId(int id){
	this->id = id;
}
int Funcionario::getId(){
	return this->id;
}
void Funcionario::setNome(std::string nome){
	this->nome = nome;
}
std::string Funcionario::getNome(){
	return this->nome;
}
void Funcionario::setCpf(std::string cpf){
	this->cpf = cpf;
}
std::string Funcionario::getCpf(){
	return this->cpf;
}
void Funcionario::setIdade(short int idade){
	this->idade = idade;
}
short int Funcionario::getIdade(){
	return this->idade;
}
void Funcionario::setTipoSanguineo(short int tipo_sanguineo){
	this->tipo_sanguineo = tipo_sanguineo;
}
short int Funcionario::getTipoSanguineo(){
	return this->tipo_sanguineo;
}
void Funcionario::setFatorRh(char fator_rh){
	this->fator_rh = fator_rh;
}
char Funcionario::getFatorRh(){
	return fator_rh;
}
void Funcionario::setEspecialidade(std::string especialidade){
	this->especialidade = especialidade;
}
std::string Funcionario::getEspecialidade(){
	return especialidade;
}
