#ifndef _REPTIL_H_
#define _REPTIL_H_
#include "Animal.h"
#include <string>

class Reptil : public Animal {
	protected:
		bool venenoso;
		std::string tipo_venenoso;
	public:
		Reptil();
		~Reptil();
};

#endif