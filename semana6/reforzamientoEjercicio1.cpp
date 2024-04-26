//ejercicio 1 de la guia c++

#include <iostream>

using namespace std;

float conversor(float temperaturaF);

int main(int argc, char const *argv[])
{
    float temperaturaF;
    cout<<"Dime la temperatura en grados farenheit " << endl;
    cin>> temperaturaF;

    cout<< "temperatura en grados celsius" << conversor(temperaturaF);


    

    return 0;
}

float conversor(float temperaturaF){

    return (temperaturaF-32)/1.8;
}