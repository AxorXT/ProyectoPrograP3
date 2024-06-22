//
// Created by Angel on 21/06/2024.
//

#ifndef PERSONAJE_BOLADEFUEGO_H
#define PERSONAJE_BOLADEFUEGO_H

#include "Habilidad.h"

class BolaDeFuego : public Habilidad {
public:

    BolaDeFuego();
    BolaDeFuego(const std::string &nombreB, int nivel, int costo, int dano);
    ~BolaDeFuego();

    void usar() override;

    int getDano() const;
    void setDano(int dano);

private:

    int dano;

};


#endif //PERSONAJE_BOLADEFUEGO_H
