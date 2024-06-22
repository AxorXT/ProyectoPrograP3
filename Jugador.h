//
// Created by Angel on 21/06/2024.
//

#ifndef PERSONAJE_JUGADOR_H
#define PERSONAJE_JUGADOR_H

#include "Personaje.h"
#include "Inventario.h"
#include "BolaDeFuego.h"

class Jugador : public Personaje, public Inventario, public BolaDeFuego {
public:

    Jugador();
    Jugador(const std::string &nombre, int salud, int mana, int dano);
    ~Jugador();

    void mostrar() override;

    void agregarItem(const item& item);

    void agregarHabilidad(const std::string &nombreB);

    void usarHabilidad(const std::string &nombre);

};


#endif //PERSONAJE_JUGADOR_H
