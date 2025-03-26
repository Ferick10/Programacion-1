// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 5

// Problema planteado: Si es numero primo.

#include <iostream>
using namespace std;
int main() {
    int num;
    bool Primo = true;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num <= 1) {
        Primo = false;  
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            Primo = false;  
            break;  
        }
    }
    if (Primo) {
        cout << num << " es un número primo." << endl;
    } else {
        cout << num << " no es un número primo." << endl;
    }
    return 0;
}
