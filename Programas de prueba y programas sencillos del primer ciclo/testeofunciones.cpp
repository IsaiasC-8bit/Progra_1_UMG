#include <iostream>
using namespace std;

void imprimirNumeros(int numeros[], int tama�o) {
    for(int i = 0; i < tama�o; i++) {
        cout << "N�mero " << i+1 << ": " << numeros[i] << endl;
    }
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    imprimirNumeros(numeros, 5); // Llamamos la funci�n

    return 0;
}
