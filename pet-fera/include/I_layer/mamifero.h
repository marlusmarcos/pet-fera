#ifndef __MAMIFERO_H__
#define __MAMIFERO_H__

#include "../animal.h"

class Mamifero : public Animal 
{
	protected:
		std::string m_cor_pelo;
	public:
		// === Constructor & Destructors ===
		Mamifero();
		~Mamifero();

		// === Getters & setters ===
		void setCorPelo(std::string cor_do_pelo);
		std::string getCorPelo();
};

#endif
