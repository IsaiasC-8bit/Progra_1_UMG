#ifndef NOTASPARCIALES_H
#define NOTASPARCIALES_H
#include <iostream>
#include<stdlib.h>
using namespace std;
//declaracion de constantes de las notas;
#define NOTASPARCIAL1 20
#define NOTASPARCIAL2 25
#define NOTASPARCIAL3 35
#define TAREAS 25
#define NOTASTOTALES 100
class NotasParciales
{
    public:
        //constructor para los private
        NotasParciales(float notaParcial1, float notaParcial2, float notaParcial3, float notaParcialF, float notaTareas, float notaFinal);
        //getters y setter para las variables privadas
        float getnotaParcial1();
        void setnotasParcial1(float notaParcial1);

        float getnotaParcial2();
        void setnotasParcial2(float notaParcial2);

        float getnotaParcialF();
        void setnotasParcialF(float notaParcialF);

        float getnotaTareas();
        void setnotasTareas(float notaTareas);

        float getnotaFinal();
        void setnotasParcial(float notaFinal);
        void calculoNotas(int facultadIngenieria[], int facultadCiencias[], int facultadMatematicas[]);
    private:
        float notaParcial1;
        float notaParcial2;
        float notaParcial3;
        float notaParcialF;
        float notaTareas;
        float notaFinal;

};

#endif // NOTASPARCIALES_H
