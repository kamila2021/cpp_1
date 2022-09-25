#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "Profesor.h"
#include "Alumno.h"

using namespace std;


int const MAX = 10;
int const MAX2 = 5;
int const MAX3= 5;
// DECLARACION DE FUNCIONES
//===================================//
//============= ALUMNO ==============//
//===================================//
int menuAlumno();
int buscarAlumno(int dato);
Alumno agregarAlumno();
Alumno actualizarAlumno();
Alumno eliminarAlumno();
int revisarEspacioAlumno();
Alumno listaAlumno[MAX3];
//===================================//
//============ PROFESOR =============//
//===================================//
int menuProfesor();
int buscarProfesor(int dato);
Profesor agregarProfesor();
Profesor actualizarProfesor();
Profesor eliminarProfesor();
int asociarRamoProfesor();
int verRamosProfesor();
int revisarEspacioProfesor();
Profesor listaProfesor[MAX2];
Ramo listaRamosProfesor[5];

//===================================//
//============== RAMO ===============//
//===================================//
int menuRamo();
int buscarRamo(int dato);
Ramo agregarRamo();
Ramo actualizarRamo();
Ramo eliminarRamo();
int revisarEspacioRamo();
Ramo listaRamos[MAX];

int main()
{
    listaRamos[0] = Ramo("Lenguaje1", "ICI", "A201");
    listaRamos[1] = Ramo("Matematicas1", "ICI", "A202");

    listaProfesor[0] = Profesor("Profesor1", "123");
    listaProfesor[1] = Profesor("Profesor2", "321");
    listaProfesor[2] = Profesor("Profesor3", "321");
    listaProfesor[3] = Profesor("Profesor4", "321");

    int opcion = 0;

    cout << "Bienvenido" << endl;
    cout << "1.Profesor" << endl;
    cout << "2.Alumno" << endl;
    cout << "3.Ramo" << endl;
    cout << "4.salir" << endl;

    cout << "Ingrese opcion al cual desea acceder:" << endl;
    cin >> opcion;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "caracter no permitido" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion;
    }

    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4)
    {
        cin.clear();

        cout << "opcion ingresada no valida" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion;
    }

    switch (opcion)
    {
    case 1:
        menuProfesor();
        break;
    case 2:
        menuAlumno();
        break;
    case 3:
        menuRamo();
    case 4:
        cout << "Saliendo del programa..." << endl;
        break;
    }
}

int menuProfesor()
{
    system("CLS");
    int opcion1 = 0;
    int opcion11 = 0;

    cout << "-----Menu Profesor-----" << endl;
    cout << "1.Datos personales" << endl;
    cout << "2.Ramos dictados" << endl;
    cout << "3.Agregar/Editar/Eliminar un Profesor" << endl;
    cout << "4.Volver al menu Principal" << endl;
    cout << "Ingrese opcion al cual desea acceder:" << endl;
    cin >> opcion1;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "caracter no permitido" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion1;
    }

    while (opcion1 != 1 && opcion1 != 2 && opcion1 != 3 && opcion1 != 4)
    {
        cin.clear();

        cout << "opcion ingresada no valida" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion1;
    }

    switch (opcion1)
    {
    case 1:
        cout << "....Datos Personales...." << endl;
        buscarProfesor(1);
        break;
    case 2:
        cout << "....Ramos dictados...." << endl;
        break;
    case 3:
        cout << "1.Agregar un nuevo profesor" << endl;
        cout << "2.Editar profesor" << endl;
        cout << "3.Eliminar profesor" << endl;
        cout << "4.Asociar ramo a profesor" << endl;
        cout << "5.Volver al menu anterior" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion11;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "caracter no permitido" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion11;
        }

        while (opcion11 != 1 && opcion11 != 2 && opcion11 != 3 && opcion11 != 4)
        {
            cin.clear();
            cout << "opcion ingresada no valida" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion11;
        }
        switch (opcion11)
        {
        case 1:
            cout << "****** INGRESANDO A MENU AGREGAR PROFESOR ******" << endl;
            agregarProfesor();
            break;
        case 2:
            cout << "****** INGRESANDO A MENU EDITAR PROFESOR ******" << endl;
            actualizarProfesor();
            break;
        case 3:
            cout << "****** INGRESANDO A MENU ELIMINAR PROFESOR ******" << endl;
            eliminarProfesor();
            break;
        case 4:
            cout << "****** INGRESANDO A MENU ASOCIAR RAMO A PROFESOR ******" << endl;
            asociarRamoProfesor();
            break;
        case 5:
            cout << "****** VOLVIENDO AL MENU ANTERIOR ******" << endl;
            main();
            break;
        }

        break;
    case 4:
        cout << "....Volviendo al menu principal...." << endl;
        main();
        break;
    }
}

int menuAlumno()
{
    system("CLS");
    int opcion1 = 0;
    int opcion11 = 0;

    cout << "-----Menu Alumno-----" << endl;
    cout << "1.Datos personales" << endl;
    cout << "2.Ramos cursando" << endl;
    cout << "3.Agregar/Editar/Eliminar un Alumno" << endl;
    cout << "4.Volver al menu Principal" << endl;
    cout << "Ingrese opcion al cual desea acceder:" << endl;
    cin >> opcion1;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "caracter no permitido" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion1;
    }

    while (opcion1 != 1 && opcion1 != 2 && opcion1 != 3 && opcion1 != 4)
    {
        cin.clear();

        cout << "opcion ingresada no valida" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion1;
    }

    switch (opcion1)
    {
    case 1:
        cout << "....Datos Personales...." << endl;
        buscarAlumno(1);
        break;
    case 2:
        cout << "....Ramos Cursando...." << endl;
        break;
    case 3:
        cout << "1.Agregar un nuevo Alumno" << endl;
        cout << "2.Editar alumno" << endl;
        cout << "3.Eliminar alumno" << endl;
        cout << "4.Asociar ramo a alumno" << endl;
        cout << "5.Volver al menu anterior" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion11;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "caracter no permitido" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion11;
        }

        while (opcion11 != 1 && opcion11 != 2 && opcion11 != 3 && opcion11 != 4)
        {
            cin.clear();
            cout << "opcion ingresada no valida" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion11;
        }
        switch (opcion11)
        {
        case 1:
            cout << "****** INGRESANDO A MENU AGREGAR PROFESOR ******" << endl;
            agregarProfesor();
            break;
        case 2:
            cout << "****** INGRESANDO A MENU EDITAR PROFESOR ******" << endl;
            actualizarProfesor();
            break;
        case 3:
            cout << "****** INGRESANDO A MENU ELIMINAR PROFESOR ******" << endl;
            eliminarProfesor();
            break;
        case 4:
            cout << "****** INGRESANDO A MENU ASOCIAR RAMO A PROFESOR ******" << endl;
            asociarRamoProfesor();
            break;
        case 5:
            cout << "****** VOLVIENDO AL MENU ANTERIOR ******" << endl;
            main();
            break;
        }

        break;
    case 4:
        cout << "....Volviendo al menu principal...." << endl;
        main();
        break;
    }
}

int menuRamo()
{
    system("CLS");
    string ramoIngresado = "";

    int opcion3 = 0;
    int opcion31 = 0;
    int cantRamos = 0;

    cout << "-----Menu Ramo----" << endl;
    cout << "1.Datos del Ramo" << endl;
    cout << "2.Agregar/Editar/Eliminar un Ramo" << endl;
    cout << "3.Volver al menu Principal" << endl;
    cout << "Ingrese opcion al cual desea acceder:" << endl;
    cin >> opcion3;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "caracter no permitido" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion3;
    }

    while (opcion3 != 1 && opcion3 != 2 && opcion3 != 3)
    {
        cin.clear();

        cout << "opcion ingresada no valida" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion3;
    }
    switch (opcion3)
    {
    case 1:
        cout << "....Datos Ramo...." << endl;
        buscarRamo(1);
        break;
    case 2:
        system("CLS");
        cout << "1.Agregar un nuevo ramo" << endl;
        cout << "2.Editar un ramo" << endl;
        cout << "3.Eliminar un ramo" << endl;
        cout << "4.Volver al menu anterior" << endl;
        cout << "Ingrese opcion al cual desea acceder:" << endl;
        cin >> opcion31;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "caracter no permitido" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion31;
        }

        while (opcion31 != 1 && opcion31 != 2 && opcion31 != 3 && opcion31 != 4)
        {
            cin.clear();
            cout << "opcion ingresada no valida" << endl;
            cout << "Ingrese opcion al cual desea acceder:" << endl;
            cin >> opcion31;
        }
        switch (opcion31)
        {
        case 1:
            cout << "**** INGRESANDO A MENU DE AGREGAR RAMO ****" << endl;
            agregarRamo();
            break;
        case 2:
            cout << "**** INGRESANDO A MENU DE EDITAR RAMO ****" << endl;
            actualizarRamo();
            break;
        case 3:
            cout << "**** INGRESANDO A MENU DE ELIMINAR RAMO ****" << endl;
            eliminarRamo();
            break;
        case 4:
            cout << "volviendo al menu anterior" << endl;
            break;
        }

        break;
    case 3:
        cout << "....Volviendo al menu principal...." << endl;
        main();
        break;
    }
}

int buscarRamo(int dato)
{
    string ramoIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar
    int respuesta;
    cout << "Ingrese el nombre del ramo: " << endl;
    cin >> ramoIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar
    bool existe = false;  // inicializamos en falso
    for (int i = 0; i < MAX; i++)
    {

        if (listaRamos[i].getNombreRamo().compare(ramoIngresado) == 0) // con el nombre que ingresamos por teclado lo usaremos para comparar con los de la lista
        {
            existe = true;
        }
        else
        {
            existe = false;
        }

        if (existe)
        {
            cout << "=======================================" << endl;
            cout << listaRamos[i].toString() << endl; // imprimiremos el ramo y todos sus datos en el caso que exista
            cout << "=======================================" << endl;

            system("pause"); // espera a que se ejecute el programa y luego lo pausa, dsp vuelve al programa original
            if (dato == 1)
            {
                menuRamo();
            }
            else if (dato == 2)
            {
                return i;
            }
        }
    }

    cout << "El ramo no existe" << endl;
    cout << "Deseas volver a intentarlo?" << endl;
    cout << "1) Si, Buscar denuevo" << endl;
    cout << "2) No, Volver al menu anterior" << endl;
    cin >> respuesta;
    while (respuesta != 1 && respuesta != 2)
    {
        cin.clear();
        cout << "opcion ingresada no valida" << endl;
        cout << "El ramo no existe" << endl;
        cout << "Deseas volver a intentarlo?" << endl;
        cout << "1) Si, Buscar denuevo" << endl;
        cout << "2) No, Volver al menu anterior" << endl;
        cin >> respuesta;
    }

    if (respuesta == 1)
    {
        buscarRamo(1); // cuando la personma quiera buscar de nuevo el ramo
    }
    else if (respuesta == 2)
    {
        menuRamo(); // volviendo al menu principal
    }
}

Ramo agregarRamo()
{

    string nombreRamo = "";

    int espacio = revisarEspacioRamo(); // llamamos a la funcion revisar espacio para revisar si en la lista aun nos queda espacio para agregar un nuevo ramo
    if (espacio != -1)
    {
        string nombreRamo;
        string carrera;
        string sala;

        cout << "Ingresa el nombre del ramo: " << endl;
        cin >> nombreRamo;

        cout << "Ingresa la carrera del ramo: " << endl;
        cin >> carrera;

        cout << "Ingresa la sala del ramo: " << endl;
        cin >> sala;

        listaRamos[espacio] = Ramo(nombreRamo, carrera, sala); // se agrega el nuevo ramo a la lista
        menuRamo();                                            // y volvemos al menu principal del ramo
    }
    else
    {
        cout << "no hay espacio" << endl; // en caso de que no quede espacio en la lista
        menuRamo();
    }
}

Ramo actualizarRamo() // funcion para editar los datos de los ramos como nombre,carrera,sala
{

    string nombreRamo;
    string nombreNuevo;
    string carreraNueva;
    string salaNueva;
    int opcion = 0;
    int indice = buscarRamo(2);

    cout << "Que dato deseas editar?" << endl;
    cout << "1) Nombre de Ramo" << endl;
    cout << "2) Nombre de carrera" << endl;
    cout << "3) Nombre de sala" << endl;
    cin >> opcion;
    while (opcion != 1 && opcion != 2 && opcion != 3)
    {
        cin.clear();
        cout << "opcion ingresada no valida" << endl;
        cout << "Que dato deseas editar?" << endl;
        cout << "1) Nombre de Ramo" << endl;
        cout << "2) Nombre de carrera" << endl;
        cout << "3) Nombre de sala" << endl;
        cin >> opcion;
    }

    switch (opcion)
    {
    case 1:
        cout << "Nombre actual: " + listaRamos[indice].getNombreRamo() << endl; // buscamos el nombre del ramo
        cout << "---------------------------------------------" << endl;
        cout << "Ingresa el nuevo nombre: " << endl;
        cin >> nombreNuevo;
        cout << "==========================================" << endl;
        listaRamos[indice].setCarrera(nombreNuevo); // a partir del indice en el cual se encuentra el nombre del ramo, lo cambiamos por el que fue ingresadon por el usuario
        break;
    case 2:
        cout << "Carrera actual: " + listaRamos[indice].getCarrera() << endl; // buscamos la carrera
        cout << "---------------------------------------------" << endl;
        cout << "Ingresa la nueva carrera: " << endl;
        cin >> carreraNueva;
        cout << "==========================================" << endl;
        listaRamos[indice].setCarrera(carreraNueva); // a partir del indice en el cual se encuentra la carerra, lo cambiamos por el que fue ingresadon por el usuario
        break;
    case 3:
        cout << "Sala actual: " + listaRamos[indice].getSala() << endl; // buscamos la sala
        cout << "---------------------------------------------" << endl;
        cout << "Ingresa la nueva sala: " << endl;
        cin >> salaNueva;
        cout << "==========================================" << endl;
        listaRamos[indice].setSala(salaNueva); // a partir del indice en el cual se encuentra la sala lo cambiamos por el que fue ingresadon por el usuario
        break;
    }

    cout << "Ramo actualizado con exito" << endl;
    cout << listaRamos[indice].toString() << endl; // se cambian los datos por lo nuevos
    cout << " " << endl;
    cout << " " << endl;
    menuRamo();
}

Ramo eliminarRamo()
{
    cout << "Nombre ramo, Carrera, Sala :" << endl;
    for (int i = 0; i < MAX; i++)
    {
        if (listaRamos[i].getNombreRamo() != "") // si la lista de ramos, el nombre del ramo no se encuentra vacio(siginifa que existe)
        {
            cout << listaRamos[i].getNombreRamo() << endl;
            cout << listaRamos[i].getCarrera() << endl;
            cout << listaRamos[i].getSala() << endl;
        }
    }

    int indice = buscarRamo(2);

    if (indice != -1)
    {
        cout << "Ramo eliminado" << endl;
        listaRamos[indice] = Ramo();
        menuRamo();
        // delete listaRamos[index]; //esto se usa cuando
    }
    else
    {
        cout << "el ramo no existe" << endl;
    }
}

int revisarEspacioRamo() // funcion para revisar si la lista aun tiene espacio
{
    bool espacio = false;
    int indice = 0;
    string nombreRamo = "";

    for (int i = 0; i < MAX; i++) // recorremos la lista
    {
        nombreRamo = listaRamos[i].getNombreRamo();
        if (nombreRamo == "") // si el nombre del ramo se encuentra vacio en tal posicion siginifica que aun queda esapcio
        {
            espacio = true;
        }
        else
        {
            espacio = false; // no queda espacio dentro de la lista
        }
        if (espacio)
        {
            indice = i;
            return indice; // me devuelve la posicion
        }
    }
    if (!espacio)
    {
        return -1;
    }
}

//=====================================//
//============= PROFESOR ==============//
//=====================================//

int buscarProfesor(int dato)
{
    string profesorIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar
    int respuesta;
    cout << "Ingrese el nombre del profesor: " << endl;
    cin >> profesorIngresado; // este es el ramo que ingresamos por teclado el cual usaremos para comparar

    bool existe = false; // inicializamos en falso
    int x = 0;
    for (x = 0; x < 5; x++)
    {
        if (listaProfesor[x].getNombre().compare(profesorIngresado) == 0) // con el nombre que ingresamos por teclado lo usaremos para comparar con los de la lista
        {
            existe = true;
        }
        else
        {
            existe = false;
        }

        if (existe)
        {
            cout << "=======================================" << endl;
            cout << listaProfesor[x].toString() << endl; // imprimiremos el ramo y todos sus datos en el caso que exista
            cout << "=======================================" << endl;

            system("pause"); // espera a que se ejecute el programa y luego lo pausa, dsp vuelve al programa original
            if (dato == 1)
            {
                menuProfesor();
            }
            else if (dato == 2)
            {
                return x;
            }
        }
    }

    cout << "El profesor no existe" << endl;
    cout << "Deseas volver a intentarlo?" << endl;
    cout << "1) Si, Buscar denuevo" << endl;
    cout << "2) No, Volver al menu anterior" << endl;
    cin >> respuesta;
    while (respuesta != 1 && respuesta != 2)
    {
        cin.clear();
        cout << "opcion ingresada no valida" << endl;
        cout << "El profesor no existe" << endl;
        cout << "Deseas volver a intentarlo?" << endl;
        cout << "1) Si, Buscar denuevo" << endl;
        cout << "2) No, Volver al menu anterior" << endl;
        cin >> respuesta;
    }

    if (respuesta == 1)
    {
        buscarProfesor(1); // cuando la persona quiera buscar de nuevo el ramo
    }
    else if (respuesta == 2)
    {
        menuProfesor(); // volviendo al menu principal
    }
}

Profesor agregarProfesor()
{
    string nombreProfesor = "";

    int espacio = revisarEspacioProfesor(); // llamamos a la funcion revisar espacio para revisar si en la lista aun nos queda espacio para agregar un nuevo ramo
    if (espacio != -1)
    {
        string nombreProfesor;
        string apellidoProfesor;

        cout << "Ingresa el nombre del profesor: " << endl;
        cin >> nombreProfesor;

        cout << "Ingresa el apellido del profesor: " << endl;
        cin >> apellidoProfesor;

        listaProfesor[espacio] = Profesor(nombreProfesor, apellidoProfesor); // se agrega el nuevo ramo a la lista
        menuProfesor();                                                      // y volvemos al menu principal del ramo
    }
    else
    {
        cout << "no hay espacio" << endl; // en caso de que no quede espacio en la lista
        menuProfesor();
    }
}

Profesor actualizarProfesor()
{
    string nombreProfesor;
    string nombreNuevo;
    string apellidoNuevo;
    int opcion = 0;
    int indice = buscarProfesor(2);

    cout << "Que dato deseas editar?" << endl;
    cout << "1) Nombre de profesor" << endl;
    cout << "2) Apellido de profesor" << endl;
    cin >> opcion;
    while (opcion != 1 && opcion != 2)
    {
        cin.clear();
        cout << "opcion ingresada no valida" << endl;
        cout << "Que dato deseas editar?" << endl;
        cout << "1) Nombre de profesor" << endl;
        cout << "2) Apellido de profesor" << endl;
        cin >> opcion;
    }

    switch (opcion)
    {
    case 1:
        cout << "Nombre actual: " + listaProfesor[indice].getNombre() << endl; // buscamos el nombre del ramo
        cout << "---------------------------------------------" << endl;
        cout << "Ingresa el nuevo nombre: " << endl;
        cin >> nombreNuevo;
        cout << "==========================================" << endl;
        listaProfesor[indice].setNombre(nombreNuevo); // a partir del indice en el cual se encuentra el nombre del ramo, lo cambiamos por el que fue ingresadon por el usuario
        break;
    case 2:
        cout << "Apellido actual: " + listaProfesor[indice].getApellido() << endl; // buscamos la carrera
        cout << "---------------------------------------------" << endl;
        cout << "Ingresa el nuevo apellido: " << endl;
        cin >> apellidoNuevo;
        cout << "==========================================" << endl;
        listaProfesor[indice].setApellido(apellidoNuevo); // a partir del indice en el cual se encuentra la carerra, lo cambiamos por el que fue ingresadon por el usuario
        break;
    }

    cout << "Profesor actualizado con exito" << endl;
    cout << listaProfesor[indice].toString() << endl; // se cambian los datos por lo nuevos
    cout << " " << endl;
    cout << " " << endl;
    menuProfesor();
}

Profesor eliminarProfesor()
{
    cout << "Nombre profesor, apellido :" << endl;
    for (int i = 0; i < MAX2; i++)
    {
        if (listaProfesor[i].getNombre() != "") // si la lista de ramos, el nombre del ramo no se encuentra vacio(siginifa que existe)
        {
            cout << listaProfesor[i].getNombre() << endl;
            cout << listaProfesor[i].getApellido() << endl;
        }
    }

    int indice = buscarProfesor(2);

    if (indice != -1)
    {
        cout << "Profesor eliminado" << endl;
        listaProfesor[indice] = Profesor();
        menuProfesor();
        // delete listaRamos[index]; //esto se usa cuando
    }
    else
    {
        cout << "el profesor no existe" << endl;
    }
}

int revisarEspacioProfesor()
{
    bool espacio = false;
    int indice = 0;
    string nombreProfesor = "";

    for (int i = 0; i < MAX; i++) // recorremos la lista
    {
        nombreProfesor = listaProfesor[i].getNombre();
        if (nombreProfesor == "") // si el nombre del ramo se encuentra vacio en tal posicion siginifica que aun queda esapcio
        {
            espacio = true;
        }
        else
        {
            espacio = false; // no queda espacio dentro de la lista
        }
        if (espacio)
        {
            indice = i;
            return indice; // me devuelve la posicion
        }
    }
    if (!espacio)
    {
        return -1;
    }
}

int asociarRamoProfesor()
{

    // int indexP = buscarProfesor(2);

    // int indexR = buscarRamo(2);

    // string nombreRamo = listaRamos[indexR].getNombreRamo();

    // listaProfesor[indexP].setRamo(nombreRamo);

    // cout << listaProfesor[indexP].toString() << endl;

    system("pause");
    menuProfesor();
}

int verRamosProfesor()
{
}
//=====================================//
//============== ALUMNO ===============//
//=====================================//