#include <string>
#include <iostream>
#include "Usuario.h"

class Profesor : public Usuario
{
private:
    // Ramo **ramos; // estoy creando un puntero del tipo Ramo (nombreRamo,carrera,sala)
    Ramo listaRamosProfesor[5];

public:
    Profesor(){};
    Profesor(string nombre, string apellido);
    Profesor(string nombre, string apellido, Ramo listaRamosProfesor[]);
    // Ramo asociarRamo(string nombreRamo);
    string toString();

    // void setRamo(Ramo ramo);
    // Ramo getRamos();
};
