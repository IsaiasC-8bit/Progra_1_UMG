#include <iostream>
#include "calculadoraclass.h"
using namespace std;

int main()
{
    cout << "Bienvenido a la calculadora simple " << endl;
    int seleccionadorMenu=0;
    CalculadoraClass operacion(0,0);
    operacion.LeerNumeros();
    while(seleccionadorMenu!= 5)
    {
        cout<< "Seleccione 1 si quiere hacer una suma"<<endl;
        cout<< "Seleccione 2 si quiere hacer una resta"<<endl;
        cout<< "Seleccione 3 si quiere hacer una multiplicacion"<<endl;
        cout<< "Seleccione 4 si quiere hacer una division"<<endl;
        cout<< "Seleccione 5 si quiere salir"<<endl;
        cout<<"..."<<endl;
        cin>> seleccionadorMenu;
        if(seleccionadorMenu>5 || seleccionadorMenu<1)
        {
           cout<<"opcion no valida"<<endl;
        }
        if (seleccionadorMenu==1)
        {
            operacion.SumaCalculadora();
        }
        if (seleccionadorMenu==2)
        {
            operacion.RestaCalculadora();
        }
        if (seleccionadorMenu==3)
        {
            operacion.MultiplicacionCalculadora();
        }
        if (seleccionadorMenu==4)
        {
            operacion.DivisionCalculadora();
        }
    }
    return 0;
}
