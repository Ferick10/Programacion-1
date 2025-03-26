// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 3

// Problema planteado: Promedio de notas.

#include <iostream>
using namespace std;
int main() {
    int n; 
    float suma = 0, nota, promedio;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    if (n <= 0) {
        cout << "El número de notas debe ser mayor que 0." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;  
    }
    promedio = suma / n;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}

