#include "../include/funcionario.h"

Funcionario::Funcionario()
{/* empty */};

Funcionario::~Funcionario()
{/* empty */};

void Funcionario::setId(int id)
{ this->m_id = id; }


int Funcionario::getId()
{ return this->m_id; }


void Funcionario::setNome(std::string nome)
{ this->m_nome = nome; }


std::string Funcionario::getNome()
{ return this->m_nome; }


void Funcionario::setCpf(std::string cpf)
{ this->m_cpf = cpf; }


std::string Funcionario::getCpf()
{ return this->m_cpf; }


void Funcionario::setIdade(short int idade)
{ this->m_idade = idade; }


short int Funcionario::getIdade()
{ return this->m_idade; }


void Funcionario::setTipoSanguineo(short int tipo_sanguineo)
{ this->m_tipo_sanguineo = tipo_sanguineo; }


short int Funcionario::getTipoSanguineo()
{ return this->m_tipo_sanguineo; }


void Funcionario::setFatorRh(char fator_rh)
{ this->m_fator_rh = fator_rh; }


char Funcionario::getFatorRh()
{ return m_fator_rh; }


void Funcionario::setEspecialidade(std::string especialidade)
{ this->m_especialidade = especialidade; }


std::string Funcionario::getEspecialidade()
{ return m_especialidade; }
