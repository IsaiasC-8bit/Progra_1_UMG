#include <iostream>
using namespace std;

// Clase base
class Instrumento {
public:
    // Método virtual: puede ser sobrescrito por clases hijas
    virtual void tocar() {
        cout << "Sonido genérico de instrumento." << endl;
    }

    // Destructor virtual: buena práctica para clases base con métodos virtuales
    virtual ~Instrumento() {}
};

// Clase derivada: Guitarra
class Guitarra : public Instrumento {
public:
    // override indica que estamos sobrescribiendo un método virtual
    void tocar() override {
        cout << "Rasgueando la guitarra " << endl;
    }
};

// Clase derivada: Piano
class Piano : public Instrumento {
public:
    void tocar() override {
        cout << "Tocando el piano " << endl;
    }
};

// Función que recibe cualquier instrumento y lo hace sonar
void interpretar(Instrumento* i) {
    i->tocar();  // Se llama al método adecuado gracias a virtual
}

int main() {
    Guitarra g;
    Piano p;

    interpretar(&g);  // Llama a Guitarra::tocar()
    interpretar(&p);  // Llama a Piano::tocar()

    return 0;
}

