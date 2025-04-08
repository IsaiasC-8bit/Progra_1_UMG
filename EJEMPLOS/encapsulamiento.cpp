#include <iostream>
using namespace std;

// Clase que representa a una Persona
class Persona {
private:
    int edad; // Atributo privado (solo accesible desde dentro de la clase)

public:
    // Método público para asignar edad con validación
    void setEdad(int e) {
        if (e >= 0)  // Validamos que no sea negativa
            edad = e;
    }

    // Método público para obtener la edad
    int getEdad() {
        return edad;
    }
};

int main() {
    Persona p;

    // Asignamos edad usando el método público
    p.setEdad(25);

    // Mostramos la edad usando el método público
    cout << "Edad: " << p.getEdad() << endl;

    return 0;
}

