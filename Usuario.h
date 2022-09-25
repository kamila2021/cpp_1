#include <iostream>
#include <string>
#include "Ramo.h"
using namespace std;

class Usuario
{
protected:
    string nombre;
    string apellido;

public:
    Usuario(){};
    Usuario(string nombre, string apellido);

    string getNombre();
    string getApellido();

    void setNombre(string nombre);
    void setApellido(string apellido);

    string toString();
};
