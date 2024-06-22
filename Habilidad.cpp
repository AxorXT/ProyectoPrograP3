//
// Created by Angel on 21/06/2024.
//

#include "Habilidad.h"

Habilidad::Habilidad() {
    this -> nombreB = "N/A";
    this -> nivel = 0;
    this -> costo = 0;
}

Habilidad::Habilidad(const std::string &nombreB, int nivel, int costo) {
    this -> nombreB = nombreB;
    this -> nivel = nivel;
    this -> costo = costo;
}

Habilidad::~Habilidad() {}

void Habilidad::usar() {}

void Habilidad::agregarHabilidad(const std::string &nombreB) {}

void Habilidad::usarHabilidad(const std::string &nombreB) {}

std::string Habilidad::getNombreB() const {
    return nombreB;
}

void Habilidad::setNombreB(std::string nombreB) {
    this -> nombreB = nombreB;
}

int Habilidad::getNivel() const {
    return nivel;
}

void Habilidad::setNivel(int nivel){
    this -> nivel = nivel;
}

int Habilidad::getCosto() const {
    return costo;
}

void Habilidad::setCosto(int costo) {
    this -> costo = costo;
}