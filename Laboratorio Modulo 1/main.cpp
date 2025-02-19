#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define CANTIDAD_DE_PARTIDOS 10
#define GOLES_MAXIMOS 10
#define GOLES_MINIMOS 0
#define NUMERO_EQUIPOS 6

void matrizDeEquipos(int matriz[NUMERO_EQUIPOS][CANTIDAD_DE_PARTIDOS + 1]);

void nombrarEquipos() {
  string equipos[NUMERO_EQUIPOS];
  cout << "Que equipos juegan esta liga?" << endl;

  for(int i = 0; i < NUMERO_EQUIPOS; i++) {
    cout << "Ingrese equipo " << (i+1) << ": ";
    getline(cin, equipos[i]);
  }

  cout << "Los equipos son: ";
  for(int i = 0; i < NUMERO_EQUIPOS; i++) {
    cout << equipos[i] << " ";
  }
  cout << endl;

  cout << "Estos equipos son los correctos? (S/N)" << endl;
  string afirmador;
  cin >> afirmador;
  cin.ignore();

  if(afirmador == "S" || afirmador == "s") {
    cout << "Equipos confirmados..." << endl;

    cout << "\n=== RESULTADOS DE LA LIGA ===" << endl;
    cout << string(41, '=') << endl;
    

    int victorias[NUMERO_EQUIPOS] = {0};
    int golesFavor[NUMERO_EQUIPOS] = {0};
    int golesContra[NUMERO_EQUIPOS] = {0};

   
    for(int equipo = 0; equipo < NUMERO_EQUIPOS; equipo++) {
      for(int partido = 0; partido < CANTIDAD_DE_PARTIDOS; partido++) {
        int golesLocal = rand() % (GOLES_MAXIMOS - GOLES_MINIMOS + 1) + GOLES_MINIMOS;
        int golesVisitante = rand() % (GOLES_MAXIMOS - GOLES_MINIMOS + 1) + GOLES_MINIMOS;

        golesFavor[equipo] += golesLocal;
        golesContra[equipo] += golesVisitante;

        if(golesLocal > golesVisitante) {
          victorias[equipo]++;

          cout << "\nPartido " << (partido + 1) << ": " << equipos[equipo] << endl;
          cout << setw(15) << left << equipos[equipo]
               << setw(8) << golesLocal 
               << " - " 
               << setw(8) << golesVisitante << endl;
        }
      }
    }

    // Mostrar tabla final
    cout << "\n=== TABLA FINAL ===" << endl;
    cout << setw(15) << left << "Equipo"
         << setw(8) << "PJ"
         << setw(8) << "PG"
         << setw(8) << "GF"
         << setw(8) << "GC"
         << "DIF" << endl;
    cout << string(55, '=') << endl;

    for(int i = 0; i < NUMERO_EQUIPOS; i++) {
      cout << setw(15) << left << equipos[i]
           << setw(8) << CANTIDAD_DE_PARTIDOS
           << setw(8) << victorias[i]
           << setw(8) << golesFavor[i]
           << setw(8) << golesContra[i]
           << (golesFavor[i] - golesContra[i]) << endl;
    }
  }
  else if(afirmador == "N" || afirmador == "n") {
    cout << "Vuelva a ingresar los equipos" << endl;
    nombrarEquipos();
  }
  else {
    cout << "Ingrese una respuesta valida" << endl;
    nombrarEquipos();
  }
}

int main() {
  srand(getpid());
  nombrarEquipos();
  return 0;
}