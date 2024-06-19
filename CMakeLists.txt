cmake_minimum_required(VERSION 3.24)
project(Personaje)

set(CMAKE_CXX_STANDARD 17)

add_executable(Personaje main.cpp Entidad.h Entidad.cpp Personaje.cpp Inventario.h Inventario.cpp Enemigo.cpp Enemigo.h)