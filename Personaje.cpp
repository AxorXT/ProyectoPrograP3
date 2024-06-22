//
// Created by Alumnos on 20/06/2024.
//

#include "Personaje.h"

Personaje::Personaje() : Entidad() {
    this -> mana = 0;
    this -> danoA = 0;
}

Personaje::Personaje(const std::string &nombreA, int saludA, int mana, int danoA) : Entidad (nombreA, saludA){
    this -> mana = mana;
    this -> danoA = danoA;
}

Personaje::~Personaje(){}

void Personaje::mostrar() {
    std::cout << getNombre() << std::endl;
    std::cout << getSalud() << std::endl;
    std::cout << getMana() << std::endl;
    std::cout << getDanoA() << std::endl;
}

int Personaje::getMana() const {
    return mana;
}

void Personaje::setMana(int mana) {
    this -> mana = mana;
}

int Personaje::getDanoA() const {
    return danoA;
}

void Personaje::setDanoA(int danoA) {
    this -> danoA = danoA;
}