//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_PERSONAJE_H
#define PROYECTOPROGRAP3_PERSONAJE_H

#include <string>
#include <iostream>
#include "Entidad.h"

class Personaje : public Entidad {
public:

    Personaje(); //Constructor default
    Personaje(const std::string &nombreA, int saludA, int mana, int danoA); //Constructor Parametros
    ~Personaje(); //Destructor

    void mostrar() override;

    int getMana() const;
    void setMana(int mana);

    int getDanoA() const;
    void setDanoA(int danoA);

private:

    int saludA;
    std::string nombreA;

    int mana;
    int danoA;

};


#endif //PROYECTOPROGRAP3_PERSONAJE_H
