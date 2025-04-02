#include <iostream>
using namespace std;

void imprimirNumeros(int numeros[], int tamaño) {
    for(int i = 0; i < tamaño; i++) {
        cout << "Número " << i+1 << ": " << numeros[i] << endl;
    }
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    imprimirNumeros(numeros, 5); // Llamamos la función

    return 0;
}
