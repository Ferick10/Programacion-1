// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 11
// Problema planteado: Realizar una funcion para evaluar un numero de la serie de Collatz

#include <iostream>
using namespace std;

int collatz(int n) {
    int pasos = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }
    return pasos;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "La cantidad de pasos necesarios es: " << collatz(num) << endl;
    return 0;
}