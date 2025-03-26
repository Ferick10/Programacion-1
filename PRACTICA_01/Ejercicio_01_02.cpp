// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 2

// Problema planteado: Volumen de la esfera.

#include <iostream>
using namespace std;
int main (){
    float radio, volumen;
    cout << "Ingrese el radio de la esfera: ";
    cin>> radio;
    volumen=(4.0/3.0)*3.1416*(radio*radio*radio);
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}