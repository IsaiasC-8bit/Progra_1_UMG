#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#define GOLES_MAXIMOS 10
#define GOLES_MINIMOS 0
#define NUMERO_EQUIPOS 6

void nombrarEquipos(string equipos[])
 {
    cout << "Ingrese los nombres de los equipos:" << endl;
    for (int i = 0; i < NUMERO_EQUIPOS; i++) {
        cout << "Equipo " << (i + 1) << ": ";
        getline(cin, equipos[i]);
    }
}

void simularLiga(string equipos[], int puntos[], int golesFavor[], int golesContra[], int ronda)
 {
    cout << "\n=== Simulación de la Liga - Ronda " << ronda << " ===\n";

    for (int i = 0; i < NUMERO_EQUIPOS; i++) {
        for (int j = i + 1; j < NUMERO_EQUIPOS; j++) {
            int golesEquipo1 = rand() % (GOLES_MAXIMOS + 1);
            int golesEquipo2 = rand() % (GOLES_MAXIMOS + 1);

            golesFavor[i] += golesEquipo1;
            golesContra[i] += golesEquipo2;
            golesFavor[j] += golesEquipo2;
            golesContra[j] += golesEquipo1;

            if (golesEquipo1 > golesEquipo2) {
                puntos[i] += 3;

            } else if (golesEquipo1 < golesEquipo2) {
                puntos[j] += 3;
            } else {
                puntos[i] += 1;
                puntos[j] += 1;
            }
        }
    }
}

void mostrarTabla(string equipos[], int puntos[], int golesFavor[], int golesContra[]) {
    cout << "\n=== TABLA FINAL ===\n";
    cout << setw(15) << left << "Equipo" << setw(8) << "Pts"
         << setw(8) << "GF" << setw(8) << "GC" << "DIF" << endl;

    for (int i = 0; i < NUMERO_EQUIPOS; i++) {
        cout << setw(15) << left << equipos[i]
             << setw(8) << puntos[i]
             << setw(8) << golesFavor[i]
             << setw(8) << golesContra[i]
             << (golesFavor[i] - golesContra[i]) << endl;
    }
}

int main() {
    srand(time(0));

    string equipos[NUMERO_EQUIPOS];
    int puntos[NUMERO_EQUIPOS] = {0};
    int golesFavor[NUMERO_EQUIPOS] = {0};
    int golesContra[NUMERO_EQUIPOS] = {0};

    nombrarEquipos(equipos);

    // Primera ronda
    cout << "\n=== PRIMERA VUELTA ===\n";
    simularLiga(equipos, puntos, golesFavor, golesContra, 1);

    // Segunda ronda
    cout << "\n=== SEGUNDA VUELTA ===\n";
    simularLiga(equipos, puntos, golesFavor, golesContra, 2);

    // Mostrar la tabla final con los resultados acumulados
    mostrarTabla(equipos, puntos, golesFavor, golesContra);

    return 0;
}
