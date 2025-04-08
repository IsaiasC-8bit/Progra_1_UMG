#include <iostream>
using namespace std;

// Clase que representa a una Persona
class Persona {
private:
    int edad; // Atributo privado (solo accesible desde dentro de la clase)

public:
    // M�todo p�blico para asignar edad con validaci�n
    void setEdad(int e) {
        if (e >= 0)  // Validamos que no sea negativa
            edad = e;
    }

    // M�todo p�blico para obtener la edad
    int getEdad() {
        return edad;
    }
};

int main() {
    Persona p;

    // Asignamos edad usando el m�todo p�blico
    p.setEdad(25);

    // Mostramos la edad usando el m�todo p�blico
    cout << "Edad: " << p.getEdad() << endl;

    return 0;
}

