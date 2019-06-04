#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_
#include <string>
#include "Animal.h"

class Mamifero : public Animal {
	protected:
		std::string cor_pelo;
	public:
		Mamifero();
		~Mamifero();
		//void setCorPelo();
		//std::string getCorPelo();
};

#endif