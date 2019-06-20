#include "../../include/III_layer/animal_exotico.h" 

Animal_exotico::Animal_exotico()
{/* empty */}

Animal_exotico::~Animal_exotico() = default;


std::string Animal_exotico::get_pais_origem(void)
{ return m_pais_origem; }


void Animal_exotico::set_pais_origem(std::string pais_origem)
{ m_pais_origem = pais_origem; }
