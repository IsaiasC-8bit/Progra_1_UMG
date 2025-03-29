#ifndef LIGA_H
#define LIGA_H
 #include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

#define GOLES_MAXIMOS 10
#define GOLES_MINIMOS 0
#define NUM_EQUIPOS 6

class Liga
{
    public:
        Liga();
        void nombreEquipos(string equipos[]);
        void simulacionLiga(string equipos[], int golesFavor[], int golesContra[], int victoriaPartido[], int empates[], int puntos[], int rondas );
        void mostrarTabla(string equipos[], int puntos[], int golesFavor[], int golesContra[], int victoriaPartido []);


};

#endif // LIGA_H
