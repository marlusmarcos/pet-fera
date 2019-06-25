#include "../../include/I_layer/tratador.h"

Tratador::Tratador()
{/* empty */}

Tratador::~Tratador()
{/* empty */}

int Tratador::get_nivel_de_seguranca()
{ return m_nivel_de_seguranca; }

void Tratador::set_nivel_de_seguranca(int nivel_de_seguranca)
{ m_nivel_de_seguranca = nivel_de_seguranca;}
