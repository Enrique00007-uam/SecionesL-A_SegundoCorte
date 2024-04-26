/*2. escriba el programa que realice las operaciones basicas 
(suma, resta multiplicacion, division,) apartir de dos numeros enteros desconocidos, utilizar una funcion diferente por 
cada operacion utilizar funcion sin parametros*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    cout << "Bienvenido.." << endl;
    cout << "opcion 1: sumar" << endl;
    cout << "opcion 2: restar" << endl;
    cout << "opcion 3: multiplicar" << endl;
    cout << "opcion 4: dividir" << endl;
    cout << "opcion 4: salir" <<endl;
    switch (opcion)
    {
    case 1:
    cout << sumar();
        /* code */
        break;
  
   case 2:
   cout << restar();
    break;
   
    case 3:
  cout <<  multiplicar();
    break;

     case 4:
    cout << dividir();
    break;
   
   
    default:
        break;
    }




    return 0;
}

int numero1, numero2;
cout << "dime dos numeros" << endl;
cin >> numero1;
cin >> numero2;