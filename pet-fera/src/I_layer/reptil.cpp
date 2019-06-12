#include "../include/Reptil.h"

Reptil::Reptil()

Reptil::~Reptil() = default;

// Getters:
bool Reptil::get_venenoso(void)
{ return m_venenoso; }

std::string Reptil::get_tipo_venenoso(void)
{ return m_tipo_venenoso; }

// Setters
void Reptil::set_venenoso(bool venenoso)
{ m_venenoso = venenoso; }

void Reptil::set_tipo_venenoso(std::string tipo_venenoso)
{ m_tipo_venenoso = tipo_venenoso ;}
