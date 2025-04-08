#include <iostream>
using namespace std;

// Clase base: Animal
class Animal {
public:
    void comer() {
        cout << "El animal est� comiendo." << endl;
    }
};

// Clase derivada: Perro, que hereda de Animal
class Perro : public Animal {
public:
    void ladrar() {
        cout << "El perro dice: �Guau!" << endl;
    }
};

int main() {
    Perro p;

    // Puede usar m�todos heredados de Animal
    p.comer();

    // Y tambi�n sus propios m�todos
    p.ladrar();

    return 0;
}

