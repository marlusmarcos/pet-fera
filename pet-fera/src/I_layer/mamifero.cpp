#include "../../include/I_layer/mamifero.h"

// === Constructor & Destructors ===
Mamifero::Mamifero() : m_cor_pelo("undefined")
{/* empty */}

Mamifero::~Mamifero() = default;

		
// === Getters & setters ===
void Mamifero::setCorPelo( std::string cor_do_pelo)
{ m_cor_pelo = cor_do_pelo; }


std::string Mamifero::getCorPelo()
{ return m_cor_pelo; }
