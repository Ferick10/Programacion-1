// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 4

// Problema planteado: Conversion de temperatura.

#include <iostream>
using namespace std;
int main (){
    float gc, gk;
    cout << "Ingrese la cantidad de grados centigrados: ";
    cin >> gc; 
    gk = (gc + 273.15);
    cout << "La cantidad de grados kelvin es de: " << gk << endl;
    return 0;
}

