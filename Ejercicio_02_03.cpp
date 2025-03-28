
// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10 usando el teorema fundamental de la numeracion

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string numeroBaseN;
    int base, resultado = 0;

    cout << "Introduce el número en base n: ";
    cin >> numeroBaseN;
    cout << "Introduce la base del número: ";
    cin >> base;

    int longitud = numeroBaseN.length();
    for (int i = 0; i < longitud; i++) {
        int digito = numeroBaseN[i] - '0';
        resultado += digito * pow(base, longitud - 1 - i); 
    }

    cout << "El número en base 10 es: " << resultado << endl;
    return 0;
}