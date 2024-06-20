//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_ENTIDAD_H
#define PROYECTOPROGRAP3_ENTIDAD_H

#include <iostream>

class Entidad {
public:

    Entidad();
    Entidad(std::string nombre, int salud);
    ~Entidad();

    virtual void actualizar();


};


#endif //PROYECTOPROGRAP3_ENTIDAD_H
