// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 12

// Problema planteado: Si es o no multiplo de otro.

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    if (num1 % num2 == 0) {
        cout << num1 << " es múltiplo de " << num2 << endl;
    } else if (num2 % num1 == 0) {
        cout << num2 << " es múltiplo de " << num1 << endl;
    } else {
        cout << "Ninguno es múltiplo" << endl;
    }
    return 0;
}