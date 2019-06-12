#include "../../include/I_layer/ave.h"

// Getters
double Ave::get_tamanho_do_bico_cm(void)
{ return m_tamanho_do_bico_cm; }

double Ave::get_envergadura_das_asas(void)
{ return m_envergadura_das_asas; }

// Setters
void Ave::get_tamanho_do_bico_cm(double tamanho_do_bico_cm)
{ m_tamanho_do_bico_cm = tamanho_do_bico_cm; }

void Ave::get_envergadura_das_asas (double envergadura_das_asas) 
{ m_envergadura_das_asas = envergadura_das_asas; }
