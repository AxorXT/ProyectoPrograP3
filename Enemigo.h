//
// Created by Alumnos on 19/06/2024.
//

#ifndef PERSONAJE_ENEMIGO_H
#define PERSONAJE_ENEMIGO_H

#include "Entidad.h"

class Enemigo : public Entidad {
public:

    Enemigo();
    Enemigo(const std::string &nombre, int salud, int danio, int armadura);
    ~Enemigo();

    void mostrarInformacion() override;

    int getDanio() const;
    void setDanio(int danio);

    int getArmadura() const;
    void setArmadura(int armadura);


private:

    int danio;
    int armadura;

};


#endif //PERSONAJE_ENEMIGO_H
