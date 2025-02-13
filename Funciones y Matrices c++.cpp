// Ejemplo de utilización de matrices codigo heredado de C
// Declaraciòn de Bibliotecas y librerias estandar de C++
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

using namespace std;
// Declaraciòn de Constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

// Declaraciòn de Prototipos de Funciòn
void llamaCiclo(); // Funciòn que controla el Ciclo comparativo de datos por
                   // todas las facultades
int busquedaAleatorios(int minimo,
                       int maximo); // Funciòn que permite obtener valores
                                    // aleatorios en las notas de cada alumno
void llenarMatriz(
    float matriz[NUMERO_ALUMNOS]
                [NUMERO_NOTAS + 1]); // Funciòn que permite asignar a cada
                                     // alumno las notas aleatorios
void titulos(); // Funciòn que apoya el despliegue de titulos en el comparativo
                // de facultades
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1],
                     char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA],
                     string nombreFacultad);
// Funciòn que permite el despliegue de cada facultad con sus alumnos y el
// calculo de promedios (menor y mayor)
int main() {
  srand(getpid()); // Proceso preparativo para generaciòn de valores aleatorios
  llamaCiclo();
  return 0;
}
void llamaCiclo() {
  // Declaraciòn de matrices por cada facultad
  float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
  float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
  float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
  char opcion; // Variable que controla el ciclo de repeticiòn
  int repeticionDelProceso = 1;
  bool repetir = true; // verificador de repeticion del proceso
  // Declaraciòn de variables flotantes para el calculo de promedios
  float promedio_facultad_1;
  float promedio_facultad_2;
  float promedio_facultad_3;
  // Declaración de variables de veces ganadas por facultad
  int ganadosFacultad1 = 0;
  int ganadosFacultad2 = 0;
  int ganadosFacultad3 = 0;
  // Declaraciòn de matriz que almacenarà los nombres de los alumnos
  char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos", "Luis", "Maria", "Pedro", "Juan"};
  // Ciclo de comparacion
  do {
    // Inicializar los promedios por facultad
    promedio_facultad_1 = 0;
    promedio_facultad_2 = 0;
    promedio_facultad_3 = 0;
    cout << "* Comparativo de Facultades *" << endl << endl;
    llenarMatriz(matriz_facultad_1); // Calculo de las notas por facultad
    promedio_facultad_1 = imprimirMatriz(
        matriz_facultad_1, alumnos,
        "Facultad de Ingenieria"); // Despliegue de valores por facultad
    llenarMatriz(matriz_facultad_2);
    promedio_facultad_2 =
        imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");
    llenarMatriz(matriz_facultad_3);
    promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos,
                                         "Facultad de Administracion");
    // Promedio de las facultades
    if (promedio_facultad_1 > promedio_facultad_2 && promedio_facultad_3) {
      // Comprobacion de facultad

      cout << " La facultad con el mejor promedio es : "
           << "Facultad de Ingenieria"
           << " Promedio: " << promedio_facultad_1 << endl;
      ganadosFacultad1 += 1;
    } else if (promedio_facultad_2 > promedio_facultad_1 &&
               promedio_facultad_2 > promedio_facultad_3) {
      // Comprobacion de facultad

      cout << " La facultad con el mejor promedio es : "
           << "Facultad de Arquitectura"
           << " Promedio: " << promedio_facultad_2 << endl;

      ganadosFacultad2 += 1;
    } else if (promedio_facultad_3 > promedio_facultad_2 &&
               promedio_facultad_1) {
      // Comprobacion de facultad

      cout << " La facultad con el mejor promedio es : "
           << "Facultad de Administracion"
           << " Promedio: " << promedio_facultad_3 << endl;
      ganadosFacultad3 += 1;
    } else {
      cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
    }
    cout << "Desea otro calculo (s/n)? " << endl;
    cin >> opcion;
    if (opcion == 'n') {
      repetir = false;
    }
    if (opcion == 's' || opcion == 'S') {
      repeticionDelProceso += 1;
    } 
    else if (opcion != 's' || opcion != 'S' || opcion != 'n' || opcion != 'N')      
    {
      cout << "Opcion no valida" << endl;
      llamaCiclo();
    }
    if (ganadosFacultad1 > ganadosFacultad2 && ganadosFacultad3) {
      cout << "La mejor facultad es: facultad de ingenieria" << endl;
    } else if (ganadosFacultad2 > ganadosFacultad1 && ganadosFacultad3) { 
      cout << "La mejor facultad es: facultad de arquitectura" << endl;
    } else if (ganadosFacultad3 > ganadosFacultad1 && ganadosFacultad2) {
      

      cout << "La mejor facultad es: facultad de administracion" << endl;
    } else {
      

      cout << "Hubo un empate entre facultades" << endl;
    }

    cout << "Los inges ganaron : " << ganadosFacultad1 << " veces"
         << endl;
    cout << "Los arquis ganaron : " << ganadosFacultad2 << " veces"
         << endl;
    cout << "Los de administracion ganaron : " << ganadosFacultad3 << " veces" << endl;
    cout << "El calculo se hizo " << repeticionDelProceso << " veces" << endl;
  } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo) {
  // Calculo de valores aleatorios tomando como base la nota minima y màxima del
  // parcial
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
  // Funciòn que permite llenar cada matriz con valores aleatorios
  int y, x;
  for (y = 0; y < NUMERO_ALUMNOS; y++) {
    float suma = 0;
    int calificacion = 0;
    for (x = 0; x < NUMERO_NOTAS; x++) {
      if (x == 0 || x == 3) // Calculo del primer parcial o actividades
      {
        calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
      } else if (x == 1) // Calculo del segundo parcial
      {
        calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
      } else if (x == 2) // Calculo del examen final
      {
        calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
      }
      suma += (float)calificacion;
      matriz[y][x] = calificacion;
      calificacion = 0;
    }
    // Agregar promedio al final de la matriz

    matriz[y][NUMERO_NOTAS] = suma;
  }
}

void titulos() {
  // Funciòn que despliega titulo de cada nota calculada
  int x;

  cout << "+--------";
  for (x = 0; x < NUMERO_NOTAS + 1; x++) {
    cout << "+---------";
  }
  cout << "+\n";
}
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1],
                     char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA],
                     string nombreFacultad) {
  // Funciòn que imprime la matriz en pantalla y realizando los calculos
  // necesarios del promedio
  int y, x;
  float promedioMayorReal = matriz[0][NUMERO_NOTAS];
  float promedioMayor = matriz[0][NUMERO_NOTAS];
  float promedioMenor = matriz[0][NUMERO_NOTAS];
  float totalGeneral = 0;
  float promedioGeneral = 0;
  char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
  char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
  memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
  memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);
  cout << nombreFacultad << endl;
  cout << "(Nota1)=>Primer Parcial  (Nota2)=>Segundo Parcial (Nota3)=>Final "
          "(Nota4)=>Actividades"
       << endl;
  titulos();
  cout << setw(9) << "Alumno";
  for (x = 0; x < NUMERO_NOTAS; x++) {
    cout << setw(9) << "Nota" << x + 1;
  }
  cout << setw(8) << "Tot" << endl;
  titulos();
  for (y = 0; y < NUMERO_ALUMNOS; y++) {
    cout << "!" << setw(8) << alumnos[y] << "!";
    for (x = 0; x < NUMERO_NOTAS; x++) {
      int calificacion = matriz[y][x];
      cout << setw(9) << calificacion << "!";
    }
    float promedio = matriz[y][NUMERO_NOTAS];
    totalGeneral += matriz[y][NUMERO_NOTAS];
    if (promedio >
        promedioMayor) // Se va guardando la nota mayor y el nombre del alumno
    {
      promedioMayor = promedio;
      promedioMayorReal = promedio / 4;
      memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
    }
    if (promedio <
        promedioMenor) // Se va guardando la nota menor y el nombre del alumno
    {
      promedioMenor = promedio;
      memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
    }
    cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
    titulos();
  }
  // Calculo del promedio general de cada facultad
  promedioGeneral = totalGeneral / NUMERO_ALUMNOS;
  cout << "NOTA MAYOR  " <<  alumnoPromedioMayor <<" "<< promedioMayor << endl;
  cout << "NOTA MENOR " << alumnoPromedioMenor << " " << promedioMenor << endl;
  cout << "NOTA PROMEDIO " << promedioGeneral << endl;
  cout << "El gallo más gallo es: " << alumnoPromedioMayor<<" "<< promedioMayorReal << endl;
  
  return promedioGeneral; // Retorno del promedio general por facultad
}
