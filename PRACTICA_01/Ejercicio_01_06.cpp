// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 6

// Problema planteado: Si es numero amigo.

#include <iostream>
using namespace std;
int main() {
    int num1, num2, suma1 = 0, suma2 = 0;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            suma1 += i;
        }
    }
    for (int i = 1; i < num2; i++) {
        if (num2 % i == 0) {
            suma2 += i;
        }
    }
    if (suma1 == num2 && suma2 == num1) {
        cout << num1 << " y " << num2 << " son números amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son números amigos." << endl;
    }
    return 0;
}