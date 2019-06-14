#ifndef __PET_MANAGER_H__
#define __PET_MANAGER_H__


/// @brief Manager classe to organize the animal`s and veterinary`s

/**
 * Functions
 * Cadastro de um novo animal
 * Remocao de um animal do cadastro
 * Alteracao dos dados cadastrais de um animal
 * Colsulta de dados cadastrais de um animal
 * */

#include <iostream>
#include <array>
#include <map>

#include "../include/animal.h"

struct pet_manager
{
    void cadastro_animal(); ///< @param obj to class Animal
    void remocao_animal(std::string animal);  ///< @string animal
};

#endif
