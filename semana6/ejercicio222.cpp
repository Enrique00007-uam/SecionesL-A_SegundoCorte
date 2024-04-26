/*Ejercicio #2: Escribir un programa que lea los tres lados
de un triángulo. Determinar el tipo de triángulo:
equilátero, si tiene tres lados iguales; o isósceles, si tiene
dos lados iguales. Dar énfasis al uso de la estructura de
decisión doble (if-then-else).*/

#include <iostream>
using namespace std;

void evulTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoB == ladoC){
        cout << "triangulo equilatero" << endl;

    }else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "triangulo Isosceles" << endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int ladoA, ladoB, ladoC;
   cout << "ingrese el lado A: ";
   cin >> ladoA;
   cout << "ingrese el lado B: ";
   cin >> ladoB;
   cout << "ingrese el lado C: ";
   cin >> ladoC;
    evulTriangulo(ladoA, ladoB, ladoC);
    return 0;
}
 /*Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris mi ligula, vehicula vel diam id, rutrum vestibulum
  lacus. Morbi vel tristique justo. Nunc sed purus ut magna sagittis ultricies non et lorem. Etiam efficitur libero 
  at turpis rhoncus blandit. In bibendum venenatis est. Sed sodales nibh ut orci ullamcorper placerat. Cras congue
   dapibus turpis.*/