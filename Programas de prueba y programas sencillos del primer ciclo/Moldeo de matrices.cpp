#include <iostream>
#include <limits> // Para numeric_limits
using namespace std;

#define NUMEROMATRIZPRUEBA 4

void matrizNombres(string nombreMoldeados[], int numeroConMatriz[]);

int main()
{
    string nombresMoldeados[NUMEROMATRIZPRUEBA] = {""};
    int numeroConMatriz[NUMEROMATRIZPRUEBA] = {0}; // Cambiado para que coincida con el número de usuarios
    matrizNombres(nombresMoldeados, numeroConMatriz);
    return 0;
}

void matrizNombres(string nombreMoldeados[], int numeroConMatriz[])
{
    for (int i = 0; i < NUMEROMATRIZPRUEBA; i++)
    {
        cout << "Ingrese nombre de usuario" << endl;
        getline(cin, nombreMoldeados[i]);

        cout << "Ingrese el numero a asistir" << endl;
        cin >> numeroConMatriz[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpieza del buffer
    }

    for (int i = 0; i < NUMEROMATRIZPRUEBA; i++) // Corrección del rango del bucle
    {
        cout << "NOMBRE: " << nombreMoldeados[i] << " Numero asignado: " << numeroConMatriz[i] << endl;
    }
}
