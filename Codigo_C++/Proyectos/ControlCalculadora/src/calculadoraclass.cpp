#include "calculadoraclass.h"
void CalculadoraClass::LeerNumeros()
{
    cout<<"Ingrese valor 1"<<endl;
    while(!(cin>>valor1))
    {
        cout<< "Entrada invalida"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout<<"Ingrese valor 2"<<endl;
    while(!(cin>>valor2))
    {
        cout<< "Entrada invalida"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
    }


}
CalculadoraClass::CalculadoraClass(float v1, float v2)
{
    valor1=v1;
    valor2=v2;
}
void CalculadoraClass::SumaCalculadora()
    {
        cout<<"El resultado de : "<<valor1<<" y "<<valor2<<" es igual a "<<valor1+valor2<<endl;

    }
void CalculadoraClass::RestaCalculadora()
    {
        cout<<"El resultado de : "<<valor1<<" y "<<valor2<<" es igual a "<<valor1-valor2<<endl;

    }
void CalculadoraClass::MultiplicacionCalculadora()
    {
        cout<<"El resultado de : "<<valor1<<" y "<<valor2<<" es igual a "<<valor1*valor2<<endl;

    }
void CalculadoraClass::DivisionCalculadora()
    {
        if(valor2 == 0)
            {
                cout<<"acaso quieres explotar cffff, no se puede dividir entre cero"<<endl;
            }
        else
            {
                cout<<"El resultado de : "<<valor1<<" y "<<valor2<<" es igual a "<<valor1/valor2<<endl;
            }

    }


