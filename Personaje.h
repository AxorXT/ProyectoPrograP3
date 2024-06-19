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
    Personaje(const std::string &nombre, int salud, int mana, int dano); //Constructor Parametros
    ~Personaje(); //Destructor

    void mostrarInformacion() override;

    int getMana() const;
    void setMana(int mana);

    int getDano() const;
    void setDano(int dano);

private:

    int salud;
    std::string nombre;

    int mana;
    int dano;

};


#endif //PROYECTOPROGRAP3_PERSONAJE_H
