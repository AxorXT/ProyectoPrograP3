//
// Created by Alumnos on 20/06/2024.
//

#include <iostream>
#include "Jugador.h"
#include "Enemigo.h"
#include "BolaDeFuego.h"
#include "item.h"

int main() {
    auto* jugador = new Jugador("Jugador",100,10,100);
    auto* enemigo = new Enemigo("Enemigo",10,5,50);
    auto* habilidad = new BolaDeFuego("Bola de fuego",10,10,10);
    auto* objeto = new item("Espada","Arma");
    jugador->agregarItem(*objeto);
    jugador->agregarHabilidad("Bola de fuego");
    jugador->usarHabilidad("Bola de fuego");
    jugador->mostrar();
    enemigo->mostrar();
    delete jugador;
    delete enemigo;
    delete habilidad;
    return 0;
}