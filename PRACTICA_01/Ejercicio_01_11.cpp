// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 11

// Problema planteado: Multiplicar sin operador multiplicacion.

#include <iostream>
using namespace std;
int main() {
    int num1, num2, resultado = 0;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    for (int i = 0; i < num2; i++) {
        resultado += num1; 
    }
    cout << "El resultado de multiplicar " << num1 << " por " << num2 << " es " << resultado << endl;
    return 0;
}