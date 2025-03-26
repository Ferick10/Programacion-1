// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 13

// Problema planteado: Mostrar el numero al reves.

#include <iostream>
using namespace std;
int main() {
    int numero, invertido = 0;
    cout << "Ingresa un numero: ";
    cin >> numero;
    while (numero != 0) {
        int digito = numero % 10;  
        invertido = invertido * 10 + digito;  
        numero = numero / 10;  
    }
    cout << "El numero al reves es: " << invertido << endl;
    return 0;
}