//
// Created by Alumnos on 20/06/2024.
//

#include "Personaje.h"

Personaje::Personaje() : Entidad() {
    this -> mana = 0;
    this -> dano = 0;
}

Personaje::Personaje(const std::string &nombre, int salud, int mana, int dano) : Entidad (nombre, salud){
    this -> mana = mana;
    this -> dano = dano;
}

Personaje::~Personaje(){
    std::cout << "Personaje exploto" << std::endl;
}

void Personaje::mostrarInformacion() {
    std::cout << "Golpe" << std::endl;
}

int Personaje::getMana() const {
    return mana;
}

void Personaje::setMana(int mana) {
    this -> mana = mana;
}

int Personaje::getDano() const {
    return dano;
}

void Personaje::setDano(int dano) {
    this -> dano = dano;
}