#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "../include/Animal.h"


struct Data{
	short int dia;
	short int mes;
	short int ano;
};

class Anfibio : public Animal {

    protected:
	int m_total_de_mudas;
	Data m_ultima_muda;

    public:
	Anfibio();
	~Anfibio();
	
	// Getters
	int getTotalMudas();
	Data getData();

	// Setters
	void setTotalMudas(int total_de_mudas);
	void setData(Data data);
};

#endif
