// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 10

// Problema planteado: Cantidad de digitos de un numero.

#include <iostream>
using namespace std;
int main() {
    int numero;
    int digitos = 0;
    cout << "Introduce un numero: ";
    cin >> numero;
    if (numero == 0) {
        digitos = 1;  
    } else {
        while (numero != 0) {
            numero = numero / 10;  
            digitos++;  
        }
    }
    cout << "El numero tiene " << digitos << " digitos." << endl;
    return 0;
}