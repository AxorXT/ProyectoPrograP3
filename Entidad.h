//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_ENTIDAD_H
#define PROYECTOPROGRAP3_ENTIDAD_H

#include <iostream>
#include <string>

class Entidad {
public:

    Entidad();
    Entidad(const std::string &nombre, int salud);
    virtual ~Entidad();

    virtual void mostrarInformacion();

    std::string getNombre() const;
    void setNombre(std::string nombre);

    int getSalud() const;
    void setSalud(int salud);


private:

    std::string nombre;
    int salud;


};


#endif //PROYECTOPROGRAP3_ENTIDAD_H
