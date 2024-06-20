//
// Created by Alumnos on 20/06/2024.
//

#include "Inventario.h"
#include <iostream>
#include <algorithm>

Inventario::Inventario() {}

Inventario::Inventario(std::vector<std::string> items, std::vector<Item *> conjuntoItems) {
    this -> items = items;
    this -> conjuntoItems = conjuntoItems;
}

Inventario::~Inventario() {}

// Método para agregar un ítem
void Inventario::agregarItem(const std::string& item) {
    items.push_back(item);
    std::cout << "Item \"" << item << "\" agregado al inventario" << std::endl;
}

// Método para agregar arma o pocion
void Inventario::agregarAP(Item *newItem) {
    conjuntoItems.push_back(newItem);
    std::cout << "Item \"" << newItem << "\" agregado al inventario" << std::endl;
}

// Método para eliminar un ítem
void Inventario::eliminarItem(const std::string& item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        items.erase(it);
        std::cout << "Item \"" << item << "\" eliminado del inventario" << std::endl;
    } else {
        std::cout << "Item \"" << item << "no encontrado en el inventario" << std::endl;
    }
    // Eliminar de conjuntoItems (items)
    auto iterador2 = std::find_if(conjuntoItems.begin(), conjuntoItems.end(),
                                  [&item](Item* Item) {
                                      return Item->getNombre() == item;
                                  });
    if (iterador2 != conjuntoItems.end()) {
        std::cout << "Item " << (*iterador2)->getNombre() << " eliminado" << std::endl;
        delete *iterador2;  // Eliminar el objeto apuntado por el puntero
        conjuntoItems.erase(iterador2);
    } else {
        std::cout << "Item no encontrado" << std::endl;
    }
}

// Método para mostrar todos los ítems
void Inventario::mostrarItems() const {
    if (items.empty() && conjuntoItems.empty()) {
        std::cout << "El inventario esta vacio." << std::endl;
    } else {
        std::cout << "Items en el inventario:" << std::endl;
        for (const auto& item : items) {
            std::cout << "- " << item << std::endl;
        }

        //mostrar items pocion y arma
        std::cout << "Armas y Pociones en el inventario:" << std::endl;
        for (const auto& item : conjuntoItems) {
            std::cout << "- " << item -> getNombre() << std::endl;
        }
    }
}

void Inventario::usarItem(const std::string &item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        std::cout << "Usando item \"" << item << "\"." << std::endl;
        items.erase(it);
    } else {
        std::cout << "Item \"" << item << "\" no encontrado en el inventario" << std::endl;
    }
}
