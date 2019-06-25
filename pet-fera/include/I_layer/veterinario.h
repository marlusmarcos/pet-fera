#ifndef __VETERINARIO_H__
#define __VETERINARIO_H__

#include "../funcionario.h"

class Veterinario : Funcionario
{
    protected:
        std::string m_crmv;

    public:
        Veterinario();

        ~Veterinario();

        void set_crmv(std::string crmv);

        std::string get_crmv(void);
};

#endif
