// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 5
// Problema planteado: Realizar una funcion para el cálculo del promedio ponderado

#include <iostream>
#include <cstdlib>  
using namespace std;

void promedioPonderado() {
    int calificaciones[4];
    int pesos[] = {10, 20, 30, 40};
    int suma = 0;
    
    for (int i = 0; i < 4; i++) {
        calificaciones[i] = rand() % 100 + 1;
        suma += calificaciones[i] * pesos[i];
    }
    
    float promedio = suma / 100.0;
    cout << "El promedio ponderado es: " << promedio << endl;
}

int main() {
    promedioPonderado();
    return 0;
}