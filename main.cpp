//
// Created by Alumnos on 20/06/2024.
//

#include "Personaje.h"
#include "Enemigo.h"
#include <iostream>

int main() {
    Personaje jugador("Heroe", 100, 50, 20);
    Enemigo enemigo("Orco", 100, 80, 15);

    Item espada("Espada", "Arma");
    Item escudo("Escudo", "Defensa");

    jugador.agregarItem(espada);
    jugador.agregarItem(escudo);

    std::cout << "\n--- Información del Personaje ---" << std::endl;
    jugador.mostrarInformacion();

    std::cout << "\n--- Información del Enemigo ---" << std::endl;
    enemigo.mostrarInformacion();

    std::cout << "\n--- Usar Item ---" << std::endl;
    jugador.usarItem("Espada");

    std::cout << "\n--- Inventario después de usar Espada ---" << std::endl;
    jugador.mostrarItems();

    std::cout << "\n--- Eliminar Item ---" << std::endl;
    jugador.eliminarItem("Escudo");

    std::cout << "\n--- Inventario después de eliminar Escudo ---" << std::endl;
    jugador.mostrarItems();

    return 0;
}