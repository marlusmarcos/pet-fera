#ifndef _REPTIL_H_
#define _REPTIL_H_

#include "../include/Animal.h"
#include <string>

class Reptil : public Animal {
	protected:
		bool m_venenoso;
		std::string m_tipo_venenoso;
	public:
		Reptil();
		~Reptil();
};

#endif
