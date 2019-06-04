#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_
#include "Animal.h"

typedef struct Data{
	short int dia;
	short int mes;
	short int ano;
}Data;

class Anfibio : public Animal {
	protected:
		int total_de_mudas;
		Data ultima_muda;
	public:
		Anfibio();
		~Anfibio();
		//void setTotalMudas();
		//int getTotalMudas();
		//void setData();
		//Data getData();
};

#endif