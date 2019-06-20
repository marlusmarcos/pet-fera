#include "../../include/III_layer/animal_nativo.h" 

Animal_nativo::Animal_nativo()
{/* empty */}

Animal_nativo::~Animal_nativo() = default;


std::string Animal_nativo::get_uf_origem(void)
{ return m_uf_origem; }


std::string Animal_nativo::get_autorization(void)
{ return m_autorization; }

void Animal_nativo::set_uf_origem(std::string uf_origem)
{ m_uf_origem = uf_origem; }


void Animal_nativo::set_autorization(std::string autorization)
{ m_autorization = autorization; }
