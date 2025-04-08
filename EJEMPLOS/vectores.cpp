#include <iostream>
#include <vector> // Necesario para usar std::vector
using namespace std;

int main() {
    // Creamos un vector de enteros para guardar edades
    vector<int> edades;

    // Pedimos al usuario que ingrese 5 edades
    for (int i = 0; i < 5; i++) {
        int edad;
        cout << "Ingresa la edad #" << i + 1 << ": ";
        cin >> edad;
        edades.push_back(edad); // Agrega la edad al final del vector
    }

    // Mostramos las edades usando un bucle
    cout << "\nLas edades ingresadas son:\n";
    for (int i = 0; i < edades.size(); i++) {
        cout << "Edad #" << i + 1 << ": " << edades[i] << endl;
    }

    return 0;
}

