//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_INVENTARIO_H
#define PROYECTOPROGRAP3_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>
#include "Item.h"
#include "Habilidad.h"

class Inventario {
public:

    // Constructor
    Inventario();

    Inventario(std::vector<std::string> items, std::vector<Item *> conjuntoItems);

    virtual ~Inventario();

    // Método para agregar un ítem
    void agregarItem(const std::string& item);

    //Metodo para agregar pociones y armas
    void agregarAP(Item* newItem);

    // Método para eliminar un ítem
    void eliminarItem(const std::string& item);

    // Método para mostrar todos los ítems
    void mostrarItems() const;

    //Método para usar item
    void usarItem(const std::string& item);

private:
    std::vector<std::string> items;

    //Agregamos vector para guardar items
    std::vector<Item *> conjuntoItems;

};



#endif //PROYECTOPROGRAP3_INVENTARIO_H
