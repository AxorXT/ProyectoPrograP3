//
// Created by Angel on 21/06/2024.
//

#include "item.h"

item::item() {
    this -> nombre = "N/A";
    this -> tipo = "N/A";
}

item::item(const std::string &nombre, const std::string &tipo) {
    this -> nombre = nombre;
    this -> tipo = tipo;
}

item::~item() {
    std::cout << "Exploto el Item" << std::endl;
}

void item::usar() {}

std::string item::getNombre() const {
    return nombre;
}

void item::setNombre(std::string nombre) {
    this -> nombre = nombre;
}

std::string item::getTipo() const {
    return tipo;
}

void item::setTipo(std::string tipo) {
    this -> tipo = tipo;
}