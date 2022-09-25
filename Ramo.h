
#include <iostream>
#include <string>

using namespace std;

class Ramo
{

private:
    string nombreRamo;
    string carrera;
    string sala;

public:
    Ramo() {}
    Ramo(string nombreRamo, string carrera, string sala);

    string getNombreRamo();
    string getCarrera();
    string getSala();
    void setNombreRamo(string nombreRamo);
    void setCarrera(string carrerra);
    void setSala(string sala);

    // int buscarRamo(int dato);
    // Ramo agregarRamo();
    // Ramo actualizarRamo();
    // Ramo eliminarRamo();
    // int revisarEspacioRamo();

    // int asociarRamo(string nombreRamo){};

    string toString();
    string toTable();

    //     string getNombreRamo() {return "kamila Nombre Ramo";};
    // string getCarrera() {return "kamila Carrera Ramo";};
    // string getSala() {return "kamila Sala Ramo";};
};
