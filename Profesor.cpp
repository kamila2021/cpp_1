#include <string>
#include <iostream>
#include "Profesor.h"

Profesor::Profesor(string nombre, string apellido)
{
    this->nombre = nombre;
    this->apellido = apellido;
}
Profesor::Profesor(string nombre, string apellido, Ramo listaRamosProfesor[])
{
    this->nombre = nombre;
    this->apellido = apellido;
    // ramos = new Ramo * [3];
}
// Ramo::asociarRamo(){

// }

// void Profesor::setRamo(Ramo ramo)
// {
//    this->listaRamosProfesor[] = ramo;
// }

// string Profesor::getRamos()
// {
//     return ramo;
// }

string Profesor::toString()
{
    string respuesta = "";
    string nombre = "Nombre Profesor: " + Profesor::getNombre() + " Apellido: " + Profesor::getApellido();
    respuesta = nombre;
    return respuesta;
}

// void agregarRamo(Ramo ramo)
// {
// }
