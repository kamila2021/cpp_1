#include <string>
#include <iostream>
#include "Usuario.h"


class Alumno : public Usuario
{
private:
  int edad;
  int semestreCursando;
//  Ramo listaRamosAlumno [5]; //voy a comentar esto

public:
  Alumno(){};
  Alumno(string nombre, string apellido, int edad, int semestreCursando);
  int getEdad();
  int getSemestreCursando();
  // Ramo getRamos();
  void setEdad(int edad);
  void setSemestreCursando(int semestreCursando);

  string toString();


  //void MostrarDatosUsuario(); //polimorfismo 
  
};
