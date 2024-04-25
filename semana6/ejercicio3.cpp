/* : Una compañía dedicada
al alquiler de automóviles, cobra $30
hasta un máximo de 500 KM de
distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más
un monto adicional del 5% por cada
kilómetro en exceso sobre 500. Para
más de 1,000 KM, cobra $30 más un
monto adicional del 8% por cada
kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin
impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada (if-then-else, if-then-else, if…).*/

#include <iostream>

using namespace std;

void montoAlquiler(int Km){

   float impuestos = 1.15;
   float totalsinImpuestos, totalImpuestos;
   float porcentaje, precioAdicional;
   int KmExtra;
   int precio =30;
    if (Km <= 500)
    {
        totalImpuestos = precio*impuestos;
        cout << "El precio sin impuestos es de: \n" <<precio << std::endl;
        cout <<"El precio con impuestos es de "<< totalImpuestos << std::endl;


    }
    else if (Km >= 500 && Km <= 1000)
    {
      KmExtra=Km-500;
      porcentaje=KmExtra*0.05;
      totalsinImpuestos=precio+porcentaje;
      totalImpuestos=totalsinImpuestos*impuestos;
      
      std::cout <<"El precio sin impuestos es de \n" << totalsinImpuestos << std::endl;
      std::cout <<"El precio con impuestos es de " << totalImpuestos << std::endl;
    }
    else
    {
        KmExtra=Km-1000;
      porcentaje=KmExtra*0.08;
      totalsinImpuestos=precio+500*0.05+porcentaje;
      totalImpuestos=totalsinImpuestos*impuestos;
      
      std::cout <<"El precio sin impuestos es de \n" << totalsinImpuestos << std::endl;
      std::cout <<"El precio con impuestos es de " << totalImpuestos << std::endl;
    }
    }
    
    int main(int argc, char const *argv[])
    {
      int Km;
      float resultado;
      cout <<"Escribe los kilometros recorridos";
      cin >>Km;
      montoAlquiler(Km);

      return 0;
    }
    

