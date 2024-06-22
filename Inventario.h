//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_INVENTARIO_H
#define PROYECTOPROGRAP3_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>
#include "item.h"

class Inventario {
public:

    // Constructor
    Inventario();

    Inventario(const std::vector<std::string>& items, std::vector<item *> conjuntoItems);

    virtual ~Inventario();

    // Método para agregar un ítem
    void agregarItem(const item& item);

    //Metodo para agregar pociones y armas
    void agregarAP(item* newItem);

    // Método para eliminar un ítem
    void eliminarItem(const std::string& item);

    // Método para mostrar todos los ítems
    void mostrarItems() const;

    //Método para usar item
    void usarItem(const std::string& item);

private:
    std::vector<std::string> items;

    //Agregamos vector para guardar items
    std::vector<item *> conjuntoItems;

};



#endif //PROYECTOPROGRAP3_INVENTARIO_H
