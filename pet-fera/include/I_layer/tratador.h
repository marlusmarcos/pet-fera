#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include "../funcionario.h"

class Tratador : public Funcionario {
    private:
        int m_nivel_de_seguranca;
    public:
        Tratador();
        ~Tratador();
        int get_nivel_de_seguranca();
        void set_nivel_de_seguranca(int nivel_de_seguranca);
};

#endif
