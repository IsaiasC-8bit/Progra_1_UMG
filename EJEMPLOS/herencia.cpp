#include <iostream>
using namespace std;

// Clase base: Animal
class Animal {
public:
    void comer() {
        cout << "El animal está comiendo." << endl;
    }
};

// Clase derivada: Perro, que hereda de Animal
class Perro : public Animal {
public:
    void ladrar() {
        cout << "El perro dice: ¡Guau!" << endl;
    }
};

int main() {
    Perro p;

    // Puede usar métodos heredados de Animal
    p.comer();

    // Y también sus propios métodos
    p.ladrar();

    return 0;
}

