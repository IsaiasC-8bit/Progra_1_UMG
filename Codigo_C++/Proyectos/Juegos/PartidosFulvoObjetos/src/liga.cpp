#include "liga.h"
 #include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
Liga::Liga()
{
    srand(time(0));

}
void Liga::nombreEquipos(string equipos[])
{
    cout<<"Ingrese el nombre de los equipos"<<endl;
    for(int i = 0; i<NUM_EQUIPOS; i++)
    {
        cout<<"Equipo..."<<(i+1)<<" : "<<endl;
        getline(cin, equipos[i]);
    }
}
void Liga:: simulacionLiga (string equipos[], int golesFavor[], int golesContra[], int victoriaPartido[], int empates[], int puntos[], int rondas )
{
    for(int i = 0; i<NUM_EQUIPOS; i++)
    {
        for(int j = 0; j<NUM_EQUIPOS; j++)
        {
            int golesEquipoLocal= rand()% (GOLES_MAXIMOS+1);
            int golesEquipoVisitante= rand()% (GOLES_MAXIMOS+1);
            golesFavor[i]+= golesEquipoLocal;
            golesContra[i] += golesEquipoVisitante;
            golesFavor[j] += golesEquipoVisitante;
            golesContra[j] +=golesEquipoLocal;
            if(golesEquipoLocal>golesEquipoVisitante)
            {
                victoriaPartido [i] +=1;
                puntos[i]+= 3;
            }
            if(golesEquipoVisitante>golesEquipoLocal)
            {
                victoriaPartido[j] +=1;
                puntos[j] +=3;

            }
            else
            {
                puntos[i]+=1;
                puntos[j]+=1;
            }

        }

    }
}
void Liga::mostrarTabla(string equipos[], int puntos[], int golesFavor[], int golesContra[],int victoriaPartido[])
 {
    cout << "\n=== TABLA FINAL ===\n";
    cout << setw(15) << left << "Equipo" << setw(8) << "Pts"<< setw(8) << "GF" << setw(8) << "GC" <<setw(8)<< "DIF" <<setw(8) << "WINS"<< endl;

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << setw(15) << left << equipos[i]<< setw(8) << puntos[i]<< setw(8) << golesFavor[i]<< setw(8) << golesContra[i]<<setw(8)<< (golesFavor[i] - golesContra[i])<< setw(8)<<victoriaPartido[i]<<endl;
    }


}
