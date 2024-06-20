//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPROGRAP3_PERSONAJE_H
#define PROYECTOPROGRAP3_PERSONAJE_H

#include <string>

class Jugador {
public:

    Jugador(); //Constructor default
    Jugador(std::string nombre, int mana, int salud,  std::vector<Habilidad *> nHabilidades); //Constructor Parametros
    virtual ~Jugador(); //Destructor

    virtual void crearAtaque();

    int getMana() const;
    void setMana(int mana);

    int getSalud() const;
    void setSalud(int salud);

    std::string getNombre() const;
    void setNombre(std::string nombre);

    void mostrarHabilidad();
    void agregarHabilidad(Habilidad *habilidad);

private:

    std::string nombre;
    int mana;
    int salud;

    std::vector<Habilidad *> nHabilidades;

};


#endif //PROYECTOPROGRAP3_PERSONAJE_H
