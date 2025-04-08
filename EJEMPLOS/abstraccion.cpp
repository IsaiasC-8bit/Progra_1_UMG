#include <iostream>
using namespace std;

// Clase que representa un Auto con comportamientos básicos
class Auto {
public:
    // Método que representa encender el auto
    void encender() {
        cout << "El auto se está encendiendo..." << endl;
    }

    // Método que representa conducir el auto
    void conducir() {
        cout << "Conduciendo el auto..." << endl;
    }
};

int main() {
    // Creamos un objeto de tipo Auto
    Auto miAuto;

    // Usamos los métodos del Auto
    miAuto.encender();
    miAuto.conducir();

    return 0;
}

