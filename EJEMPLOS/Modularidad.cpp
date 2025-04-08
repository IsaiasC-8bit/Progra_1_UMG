#include <iostream>
using namespace std;

// Clase que agrupa funciones de una calculadora
class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    int restar(int a, int b) {
        return a - b;
    }
};

int main() {
    Calculadora c;

    // Usamos métodos separados para cada operación
    cout << "Suma: " << c.sumar(4, 2) << endl;
    cout << "Resta: " << c.restar(4, 2) << endl;

    return 0;
}

