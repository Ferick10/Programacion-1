// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 1

// Problema planteado: Área de un triángulo.


#include <iostream>
using namespace std;
int main (){
    float base, altura, area;
    cout << "Ingresa la base del triangulo";
    cin>> base;
    cout << "Ingresa la altura del triangulo";
    cin>> altura;
    area= (base*altura)/ 2;
    cout <<"El area del triangulo es: " << area << endl;
    return 0;
}