//
// Created by Angel on 21/06/2024.
//

#ifndef PERSONAJE_HABILIDAD_H
#define PERSONAJE_HABILIDAD_H

#include <iostream>
#include <string>

class Habilidad {
public:

    Habilidad();
    Habilidad(const std::string &nombreB, int nivel, int costo);
    virtual ~Habilidad();

    virtual void usar();

    std::string getNombreB() const;
    void setNombreB(std::string nombreB);

    int getNivel() const;
    void setNivel(int nivel);

    int getCosto() const;
    void setCosto(int costo);

    void agregarHabilidad(const std::string &nombreB);

    void usarHabilidad(const std::string &nombreB);


private:

    std::string nombreB;
    int nivel;
    int costo;



};


#endif //PERSONAJE_HABILIDAD_H
