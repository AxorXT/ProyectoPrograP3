//
// Created by Alumnos on 20/06/2024.
//

#include "Jugador.h"
#include "Enemigo.h"
#include <iostream>

int main() {
    Jugador jugador("Heroe", 100, 50);
    Enemigo enemigo("Orco", 80, 15);

    Item espada("Espada", "Arma");
    Item escudo("Escudo", "Defensa");

    jugador.agregarItem(espada);
    jugador.agregarItem(escudo);

    std::cout << "\n--- Información del Jugador ---" << std::endl;
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