#include <iostream>

using namespace std;

int main (){
    int figura = 0;
    int circulo = 0;
    int cuadrado = 0;
    int triangulo = 0;
    float radio = 0;
    float lado = 0;
    float base = 0;
    float altura = 0;
    const float pi = 3.1416;
    cout << "Ingresa la figura geometrica para calcular su area / triangulo (1) / cuadrado (2) / circulo (3) ";
    cin >> figura;

    switch(figura) {
        case 1:
            cout<<"Ingrese el valor de la base: ";
            cin>>base;
            cout<<"Ingrese el valor de la altura: ";
            cin>>altura;
            triangulo = base * altura / 2;
            cout <<"El area del triangulo es: "; cout << triangulo;
            break;
            
        case 2:
            cout << "Ingrese el valor de un lado: ";
            cin >> lado;
            cuadrado = lado * lado;
            cout <<"El area del cuadrado es: "; cout << cuadrado;
            break;
        
        case 3:
            cout<<"Ingrese el valor del radio: ";
            cin>>radio;
            radio = radio * radio;
            circulo = pi * radio;
            cout<<"El area del circulo es: "; cout << circulo;
            break;

    }

    return 0;

}