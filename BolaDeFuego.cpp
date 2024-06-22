//
// Created by Angel on 21/06/2024.
//

#include "BolaDeFuego.h"

BolaDeFuego::BolaDeFuego() {
    this -> dano = 0;
}

BolaDeFuego::BolaDeFuego(const std::string &nombreB, int nivel, int costo, int dano) : Habilidad(nombreB, nivel, costo){
    this -> dano = dano;
}

BolaDeFuego::~BolaDeFuego() {}

void  BolaDeFuego::usar() {
    std::cout << getNombreB() << std::endl;
    std::cout << getNivel() << std::endl;
    std::cout << getCosto() << std::endl;
    std::cout << getDano() << std::endl;
}

int BolaDeFuego::getDano() const {
    return dano;
}

void BolaDeFuego::setDano(int dano) {
    this -> dano = dano;
}