#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "liga.h"
using namespace std;

int main()
{
    Liga liga;
    string equipos[NUM_EQUIPOS];
    int puntos[NUM_EQUIPOS] = {0};
    int golesFavor[NUM_EQUIPOS] = {0};
    int golesContra[NUM_EQUIPOS] = {0};
    int victoriaPartido[NUM_EQUIPOS] = {0};
    int empates[NUM_EQUIPOS] = {0};

    liga.nombreEquipos(equipos);

    cout<<" PRIMER RONDA (NO VISIBLE)"<<endl;
    liga.simulacionLiga(equipos, golesFavor, golesContra, victoriaPartido, empates, puntos, 1);
    cout<<"SEGUNDA RONDA (NO VISIBLE)"<<endl;
     liga.simulacionLiga(equipos, golesFavor, golesContra, victoriaPartido, empates, puntos, 2);
    cout<<"RESULTADO FINAL DE LA LIGA"<<endl;
    liga.mostrarTabla(equipos, puntos, golesFavor, golesContra,victoriaPartido);
}
