#ifndef __AVE_H__
#define __AVE_H__

#include "../include/Animal.h"

class Ave : public Animal
{
    protected:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;

    public:
	// Getters
	double get_tamanho_do_bico_cm(void);
	double get_envergadura_das_asas(void);

	// Setters
	void get_tamanho_do_bico_cm(double tamanho_do_bico_cm);
	void get_envergadura_das_asas(double envergadura_das_asas);
};
#endif
