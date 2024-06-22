//
// Created by Alumnos on 20/06/2024.
//

#include "Entidad.h"

Entidad::Entidad() {
    this -> nombre = "N/A";
    this -> salud = 0;
}

Entidad::Entidad(const std::string &nombre, int salud) {
    this -> nombre = nombre;
    this -> salud = salud;
}

Entidad::~Entidad() {}

void Entidad::mostrar() {}

int Entidad::getSalud() const {
    return salud;
}

void Entidad::setSalud(int salud) {
    this -> salud = salud;
}

std::string Entidad::getNombre() const {
    return nombre;
}

void Entidad::setNombre(std::string nombre) {
    this -> nombre = nombre;
}