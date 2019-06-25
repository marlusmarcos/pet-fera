#include "../../include/I_layer/veterinario.h"

Veterinario::Veterinario()
{/* empty */}

Veterinario::~Veterinario()
{/* empty */}


void Veterinario::set_crmv(std::string crmv)
{ m_crmv = crmv; }


std::string Veterinario::get_crmv(void)
{ return m_crmv; }
