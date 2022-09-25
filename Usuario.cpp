
#include <string>
#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(string nombre, string apellido)
{
    this->nombre = nombre;
    this->apellido = apellido;
}

string Usuario::getNombre()
{
    return nombre;
}

string Usuario::getApellido()
{
    return apellido;
}

void Usuario::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Usuario::setApellido(string apellido)
{
    this->apellido = apellido;
}

string Usuario::toString()
{
    string respuesta = "";
    respuesta = Usuario::getNombre();
    return respuesta;
}
