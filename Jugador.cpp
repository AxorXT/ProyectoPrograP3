//
// Created by Alumnos on 20/06/2024.
//

#include "Jugador.h"

Jugador::Jugador() {
    this -> mana = 0;
    this -> salud = 0;
    this -> nombre = "N/A";
}

Jugador::Jugador(std::string nombre, int mana, int salud, std::vector<Habilidad *> nHabilidades) {
    this -> mana = mana;
    this -> salud = salud;
    this -> nombre = nombre;
    this -> nHabilidades = nHabilidades;
}

Jugador::~Jugador(){
    std::cout << "Personaje exploto" << std::endl;
}

void Jugador::crearAtaque() {
    std::cout << "Golpe" << std::endl;
}

int Jugador::getMana() const {
    return mana;
}

void Jugador::setMana(int mana) {
    this -> mana = mana;
}

int Jugador::getSalud() const {
    return salud;
}

void Jugador::setSalud(int salud) {
    this -> salud = salud;
}

std::string Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(std::string nombre) {
    this -> nombre = nombre;
}

void Jugador::mostrarHabilidad() {
    for(Habilidad* habilidad : nHabilidades){
        habilidad->usarHabilidad();
    }
}

void Jugador::agregarHabilidad(Habilidad* habilidad) {
    nHabilidades.push_back(habilidad);
}