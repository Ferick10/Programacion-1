// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 9

// Problema planteado: primeros 100 numeros primos.

#include <iostream>
using namespace std;
int main() {
    int num = 2; 
    int contador = 0;  
    while (contador < 100) {
        bool esPrimo = true;  
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {  
                esPrimo = false;
            }
        }
        if (esPrimo) {
            cout << num << " ";
            contador++;  
        }
        num++;  
    }
    return 0;
}