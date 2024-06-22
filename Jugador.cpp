//
// Created by Angel on 21/06/2024.
//

#include "Jugador.h"

Jugador::Jugador() {}

Jugador::Jugador(const std::string &nombre, int salud, int mana, int danoA) : Personaje(nombre, salud, mana, danoA), Inventario(), BolaDeFuego(){}

Jugador::~Jugador() {}

void Jugador::mostrar() {
    std::cout << getNombre() << std::endl;
    std::cout << getSalud() << std::endl;
    std::cout << getMana() << std::endl;
    std::cout << getDanoA() << std::endl;
}

void Jugador::agregarItem(const item &item) {}

void Jugador::agregarHabilidad(const std::string &nombreB) {}

void Jugador::usarHabilidad(const std::string &nombre) {}