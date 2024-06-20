cmake_minimum_required(VERSION 3.24)
project(Personaje)

set(CMAKE_CXX_STANDARD 17)

add_executable(Personaje main.cpp PersonajeVideojuego.h PersonajeVideojuego.cpp Mago.h Mago.cpp Guerrero.h Guerrero.cpp
        Enemigo.h
        Enemigo.cpp
        Duende.h
        Duende.cpp
        Orco.h
        Orco.cpp
        Inventario.h
        Inventario.cpp
        Entidad.h
        Entidad.cpp
        Jugador.h
        Jugador.cpp
        EnemigoEntidad.h
        EnemigoEntidad.cpp
        Habilidad.h
        Habilidad.cpp
        BolaDeFuego.h
        BolaDeFuego.cpp
        CuracionHabilidad.h
        CuracionHabilidad.cpp
        ConfiguracionesJuego.h
        ConfiguracionesJuego.cpp Jugador.h Jugador.cpp Item.h Item.cpp Pocion.h Pocion.cpp Arma.h Arma.cpp)