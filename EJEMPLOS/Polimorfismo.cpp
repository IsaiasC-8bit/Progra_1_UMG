#include <iostream>
using namespace std;

// Clase base con método virtual
class Animal {
public:
    // Método virtual: se puede redefinir en las clases hijas
    virtual void hacerSonido() {
        cout << "Sonido genérico." << endl;
    }
};

// Clase derivada: Gato
class Gato : public Animal {
public:
    // Redefinimos el método usando override
    void hacerSonido() override {
        cout << "Miau" << endl;
    }
};

// Clase derivada: Perro
class Perro : public Animal {
public:
    // Redefinimos el método usando override
    void hacerSonido() override {
        cout << "Guau" << endl;
    }
};

// Función que recibe un puntero a Animal y llama a hacerSonido
void hacerSonar(Animal* a) {
    a->hacerSonido(); // Se ejecuta según el tipo real del objeto
}

int main() {
    Gato g;
    Perro p;

    // Llamamos a la función con objetos distintos
    hacerSonar(&g);  // Miau
    hacerSonar(&p);  // Guau

    return 0;
}

