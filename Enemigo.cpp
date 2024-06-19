//
// Created by Alumnos on 19/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo() {
    this -> danio = 0;
    this -> armadura = 0;
}

Enemigo::Enemigo(const std::string &nombre, int salud, int danio, int armadura) {
    this -> danio = danio;
    this -> armadura = armadura;
}

Enemigo::~Enemigo() {}

int Enemigo::getDanio() const {
    return danio;
}

void Enemigo::setDanio(int danio) {
    this -> danio = danio;
}

int Enemigo::getArmadura() const {
    return armadura;
}

void Enemigo::setArmadura(int armadura) {
    this -> armadura = armadura;
}