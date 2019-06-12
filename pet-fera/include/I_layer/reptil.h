#ifndef __REPTIL_H__
#define __REPTIL_H__

#include "../animal.h"

class Reptil : public Animal 
{
    protected:
	bool m_venenoso;
	std::string m_tipo_venenoso;

    public:
	/// Constructors && Destructors
	Reptil();
	~Reptil();

	// Getters && Setters
	bool get_venenoso(void);
	std::string get_tipo_venenoso(void);

	void set_venenoso(bool venenoso);
	void set_tipo_venenoso(std::string tipo_venenoso);

};

#endif
