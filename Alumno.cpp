
#include <string>
#include <iostream>
#include "Alumno.h"

Alumno::Alumno(string nombre, string apellido, int edad, int semestreCursando)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->semestreCursando = semestreCursando;
}

// get y set de alumno
int Alumno::getEdad()
{
    return edad;
}
int Alumno::getSemestreCursando()
{
    return semestreCursando;
}
void Alumno::setEdad(int edad)
{
    this->edad = edad;
}
void Alumno::setSemestreCursando(int semestreCursando)
{
    this->semestreCursando = semestreCursando;
}
// tring Alumno::getRamos()
// {
//     return ramo;
// }

string Alumno::toString()
{
    string respuesta = "";
    string nombre = "Nombre alumno: " + Alumno::getNombre() + " Apellido: " + Alumno::getApellido() + " Edad: " + Alumno::getEdad() + " Semestre cursando: " + Alumno:: getSemestreCursando();
    respuesta = nombre;
    return respuesta;
}

// Alumno::Alumno() : Usuario(), edad(0), semestreCursando(0),
// {
//     ramos = new Ramo[5];
// };
