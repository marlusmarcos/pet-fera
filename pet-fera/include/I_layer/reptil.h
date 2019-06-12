#ifndef _REPTIL_H_
#define _REPTIL_H_

#include "../include/Animal.h"

class Reptil : public Animal 
{
    protected:
	bool m_venenoso;
	std::string m_tipo_venenoso;

    public:
	Reptil();
	~Reptil();

	// Getters:
	bool get_venenoso(void);
	std::string get_tipo_venenoso(void);

	// Setters
	void set_venenoso(bool venenoso);
	void set_tipo_venenoso(std::string tipo_venenoso);

};

#endif
