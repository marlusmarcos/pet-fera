#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include "../include/Animal.h"

class Mamifero : public Animal {
	protected:
		std::string m_cor_pelo;
	public:
		Mamifero();
		~Mamifero();
		void setCorPelo(std::string cor_do_pelo);
		std::string getCorPelo();
};

#endif
