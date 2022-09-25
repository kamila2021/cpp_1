#include <string>
#include <iostream>
#include <list>
#include "Ramo.h"

Ramo::Ramo(string nombreRamo, string carrera, string sala)
{
    this->nombreRamo = nombreRamo;
    this->carrera = carrera;
    this->sala = sala;
}

// int asociarRamo(string nombreRamo)
// {
//     if ()
//         return 1;
// }

string Ramo::getNombreRamo()
{
    return nombreRamo;
}
string Ramo::getCarrera()
{
    return carrera;
}
string Ramo::getSala()
{
    return sala;
}

void Ramo::setNombreRamo(string nombreRamo)
{
    this->nombreRamo = nombreRamo;
}
void Ramo::setCarrera(string carrera)
{
    this->carrera = carrera;
}
void Ramo::setSala(string sala)
{
    this->sala = sala;
}

// int Ramo::buscarRamo(int dato)
// {
//     string ramoIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar
//     int respuesta;
//     cout << "Ingrese el nombre del ramo: " << endl;
//     cin >> ramoIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar
//     bool existe = false;  // inicializamos en falso
//     for (int i = 0; i < 10; i++)
//     {
//         if (listaRamos[i].getNombreRamo().compare(ramoIngresado) == 0) // con el nombre que ingresamos por teclado lo usaremos para comparar con los de la lista
//         {
//             existe = true;
//         }
//         else
//         {
//             existe = false;
//         }

//         if (existe)
//         {
//             cout << "=======================================" << endl;
//             cout << listaRamos[i].toString() << endl; // imprimiremos el ramo y todos sus datos en el caso que exista
//             cout << "=======================================" << endl;

//             system("pause"); // espera a que se ejecute el programa y luego lo pausa, dsp vuelve al programa original
//             if (dato == 1)
//             {
//                 return -1;
//             }
//             else if (dato == 2)
//             {
//                 return i;
//             }
//         }
//     }

//     cout << "El ramo no existe" << endl;
//     cout << "Deseas volver a intentarlo?" << endl;
//     cout << "1) Si, Buscar denuevo" << endl;
//     cout << "2) No, Volver al menu anterior" << endl;
//     cin >> respuesta;
//     while (respuesta != 1 && respuesta != 2)
//     {
//         cin.clear();
//         cout << "opcion ingresada no valida" << endl;
//         cout << "El ramo no existe" << endl;
//         cout << "Deseas volver a intentarlo?" << endl;
//         cout << "1) Si, Buscar denuevo" << endl;
//         cout << "2) No, Volver al menu anterior" << endl;
//         cin >> respuesta;
//     }

//     if (respuesta == 1)
//     {
//         buscarRamo(1); // cuando la personma quiera buscar de nuevo el ramo
//     }
//     else if (respuesta == 2)
//     {
//         return -1;
//     }
// }

// int Ramo::agregarRamo()
// {
//     string nombreRamo = "";

//     int espacio = revisarEspacio(); // llamamos a la funcion revisar espacio para revisar si en la lista aun nos queda espacio para agregar un nuevo ramo
//     if (espacio != -1)
//     {
//         string nombreRamo;
//         string carrera;
//         string sala;

//         cout << "Ingresa el nombre del ramo: " << endl;
//         cin >> nombreRamo;

//         cout << "Ingresa la carrera del ramo: " << endl;
//         cin >> carrera;

//         cout << "Ingresa la sala del ramo: " << endl;
//         cin >> sala;

//         listaRamos[espacio] = Ramo(nombreRamo, carrera, sala); // se agrega el nuevo ramo a la lista
//         return 1;
//     }
//     else
//     {
//         cout << "no hay espacio" << endl; // en caso de que no quede espacio en la lista
//         return -1;
//     }
// }

// int Ramo::editarRamo()
// {
//     string nombreRamo;
//     string nombreNuevo;
//     string carreraNueva;
//     string salaNueva;
//     int opcion = 0;
//     int indice = buscarRamo(2);

//     cout << "Que dato deseas editar?" << endl;
//     cout << "1) Nombre de Ramo" << endl;
//     cout << "2) Nombre de carrera" << endl;
//     cout << "3) Nombre de sala" << endl;
//     cin >> opcion;
//     while (opcion != 1 && opcion != 2 && opcion != 3)
//     {
//         cin.clear();
//         cout << "opcion ingresada no valida" << endl;
//         cout << "Que dato deseas editar?" << endl;
//         cout << "1) Nombre de Ramo" << endl;
//         cout << "2) Nombre de carrera" << endl;
//         cout << "3) Nombre de sala" << endl;
//         cin >> opcion;
//     }

//     switch (opcion)
//     {
//     case 1:
//         cout << "Nombre actual: " + listaRamos[indice].getNombreRamo() << endl; // buscamos el nombre del ramo
//         cout << "---------------------------------------------" << endl;
//         cout << "Ingresa el nuevo nombre: " << endl;
//         cin >> nombreNuevo;
//         cout << "==========================================" << endl;
//         listaRamos[indice].setCarrera(nombreNuevo); // a partir del indice en el cual se encuentra el nombre del ramo, lo cambiamos por el que fue ingresadon por el usuario
//         break;
//     case 2:
//         cout << "Carrera actual: " + listaRamos[indice].getCarrera() << endl; // buscamos la carrera
//         cout << "---------------------------------------------" << endl;
//         cout << "Ingresa la nueva carrera: " << endl;
//         cin >> carreraNueva;
//         cout << "==========================================" << endl;
//         listaRamos[indice].setCarrera(carreraNueva); // a partir del indice en el cual se encuentra la carerra, lo cambiamos por el que fue ingresadon por el usuario
//         break;
//     case 3:
//         cout << "Sala actual: " + listaRamos[indice].getSala() << endl; // buscamos la sala
//         cout << "---------------------------------------------" << endl;
//         cout << "Ingresa la nueva sala: " << endl;
//         cin >> salaNueva;
//         cout << "==========================================" << endl;
//         listaRamos[indice].setSala(salaNueva); // a partir del indice en el cual se encuentra la sala lo cambiamos por el que fue ingresadon por el usuario
//         break;
//     }

//     cout << "Ramo actualizado con exito" << endl;
//     cout << listaRamos[indice].toString() << endl; // se cambian los datos por lo nuevos
//     cout << " " << endl;
//     cout << " " << endl;
// }

// int Ramo::eliminarRamo()
// {
//     cout << "Nombre ramo, Carrera, Sala :" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         if (listaRamos[i].getNombreRamo() != "") // si la lista de ramos, el nombre del ramo no se encuentra vacio(siginifa que existe)
//         {
//             cout << listaRamos[i].getNombreRamo() << endl;
//             cout << listaRamos[i].getCarrera() << endl;
//             cout << listaRamos[i].getSala() << endl;
//         }
//     }

//     int indice = buscarRamo(2);

//     if (indice != -1)
//     {
//         cout << "Ramo eliminado" << endl;
//         listaRamos[indice] = Ramo();
//         menuRamo();
//         // delete listaRamos[index]; //esto se usa cuando
//     }
//     else
//     {
//         cout << "el ramo no existe" << endl;
//     }
// }

// int Ramo::revisarEspacio()
// {
//     bool espacio = false;
//     int indice = 0;
//     string nombreRamo = "";

//     for (int i = 0; i < 10; i++) // recorremos la lista
//     {
//         nombreRamo = listaRamos[i].getNombreRamo();
//         if (nombreRamo == "") // si el nombre del ramo se encuentra vacio en tal posicion siginifica que aun queda esapcio
//         {
//             espacio = true;
//         }
//         else
//         {
//             espacio = false; // no queda espacio dentro de la lista
//         }
//         if (espacio)
//         {
//             indice = i;
//             return indice; // me devuelve la posicion
//         }
//     }
//     if (!espacio)
//     {
//         return -1;
//     }
// }

string Ramo::toString()
{
    string respuesta = "";
    string nombreRamo = "Nombre de Ramo: " + Ramo::getNombreRamo();
    string carrera = "Carrera: " + Ramo::getCarrera();
    string sala = "Sala: " + Ramo::getSala();

    respuesta = nombreRamo + " " + carrera + " " + sala;

    return respuesta;
}

string Ramo::toTable()
{
    //   string response = "";
    // string nombreRamo = "Nombre de Ramo: " + Ramo::getNombreRamo();
    // string carrera = "Carrera: " + Ramo::getCarrera();
    // string sala = "Sala: " + Ramo::getSala();

    // response = setw(10) + Ramo::getNombreRamo();
    // return response;
}
