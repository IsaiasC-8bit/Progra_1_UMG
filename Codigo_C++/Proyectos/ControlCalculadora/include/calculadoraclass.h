#ifndef CALCULADORACLASS_H
#define CALCULADORACLASS_H
#include <iostream>
using namespace std;
class CalculadoraClass
{
   public:

    float valor1;
    float valor2;
    CalculadoraClass(float v1, float v2);

    void SumaCalculadora();
    void RestaCalculadora();
    void MultiplicacionCalculadora();
    void DivisionCalculadora();
    void LeerNumeros();
};

#endif // CALCULADORACLASS_H
