#include <iostream>
using namespace std;

// Clase que representa un Auto con comportamientos b�sicos
class Auto {
public:
    // M�todo que representa encender el auto
    void encender() {
        cout << "El auto se est� encendiendo..." << endl;
    }

    // M�todo que representa conducir el auto
    void conducir() {
        cout << "Conduciendo el auto..." << endl;
    }
};

int main() {
    // Creamos un objeto de tipo Auto
    Auto miAuto;

    // Usamos los m�todos del Auto
    miAuto.encender();
    miAuto.conducir();

    return 0;
}

