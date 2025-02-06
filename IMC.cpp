#include <iostream>
#include <cstdlib>
// Librerias a usar, ejemplo por parte del Inge
// Febrero 2025 Isac8bit
using namespace std;
int main ()
{
  //Declarar variables a usar
  float Altura = 0;
  float Peso = 0;
  float imc;
  int menu=0;
  cout <<"Calculadora de IMC"<<endl;
  //bucle while para el calculo
  
  while (menu!=3)
  {
    cout <<"1 para sistema imperial (pulgadas y libras)"<<endl;
    cout <<"2 para sistema metrico (metros y kg)"<<endl;
    cout<<"3 para salir"<<endl;
    cin >>menu;
    
//condiciones para el sistema metrico y formulas
    if (menu == 1)
      {
        cout <<"Ingrese altura en pulgadas"<<endl;
        cin >>Altura;
        cout <<"Ingrese peso en libras"<<endl;
        cin >>Peso;
        imc = (Peso*703)/(Altura*Altura);
        cout <<"Su imc es de :"<<imc<<endl;
        if (imc < 18.5)
          {
            cout <<"Halo flacow"<<endl;
          }
        if (imc >= 18.5 && imc <= 24.9)
          {
            cout <<"Cielos usted esta bien macizo"<<endl;
          }
        if ( imc>= 25)
          {
            cout << "Bajale al pan de dulce w"<<endl;
          }
        
      }
    if (menu == 2)
      {
        cout<<"Ingrese altura en metros"<<endl;
        cin >>Altura;
        cout <<"Ingrese peso en "<<endl;
        cin >>Peso;
        imc = (Peso)/(Altura*Altura);
        cout <<"Su imc es de :"<<imc<<endl;
        if (imc < 18.5)
          {
            cout <<"Halo flacow"<<endl;
          }
        if (imc >= 18.5 && imc <= 24.9)
          {
            cout <<"Cielos usted esta bien macizo"<<endl;
          }
        if ( imc>= 25)
          {
            cout << "Bajale al pan de dulce w"<<endl;
          }
        
      }
    
  }
}
