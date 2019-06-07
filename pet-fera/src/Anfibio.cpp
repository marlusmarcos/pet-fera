#include "../include/Anfibio.h"


Anfibio::Anfibio()
{}


Anfibio::~Anfibio()
{}

// Getters
int Anfibio::getTotalMudas()
{ return m_total_de_mudas; }

Data Anfibio::getData()
{ return m_ultima_muda; }

// Setters
void Anfibio::setTotalMudas(int total_de_mudas)
{ m_total_de_mudas = total_de_mudas; }

void Anfibio::setData(Data data)
{ 
    m_ultima_muda.dia = data.dia;
    m_ultima_muda.mes = data.mes;
    m_ultima_muda.ano = data.ano;
}
