#include <iostream>
using namespace std;

// Clase base con m�todo virtual
class Animal {
public:
    // M�todo virtual: se puede redefinir en las clases hijas
    virtual void hacerSonido() {
        cout << "Sonido gen�rico." << endl;
    }
};

// Clase derivada: Gato
class Gato : public Animal {
public:
    // Redefinimos el m�todo usando override
    void hacerSonido() override {
        cout << "Miau" << endl;
    }
};

// Clase derivada: Perro
class Perro : public Animal {
public:
    // Redefinimos el m�todo usando override
    void hacerSonido() override {
        cout << "Guau" << endl;
    }
};

// Funci�n que recibe un puntero a Animal y llama a hacerSonido
void hacerSonar(Animal* a) {
    a->hacerSonido(); // Se ejecuta seg�n el tipo real del objeto
}

int main() {
    Gato g;
    Perro p;

    // Llamamos a la funci�n con objetos distintos
    hacerSonar(&g);  // Miau
    hacerSonar(&p);  // Guau

    return 0;
}

