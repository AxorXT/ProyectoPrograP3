//
// Created by Angel on 21/06/2024.
//

#ifndef PERSONAJE_ITEM_H
#define PERSONAJE_ITEM_H

#include <string>
#include <iostream>

class item {
public:

    item();
    item(const std::string &nombre, const std::string &tipo);
    virtual ~item();

    std::string getNombre() const;
    void setNombre(std::string nombre);

    std::string getTipo() const;
    void setTipo(std::string tipo);

    virtual void usar();

private:

    std::string nombre;
    std::string tipo;

};


#endif //PERSONAJE_ITEM_H
