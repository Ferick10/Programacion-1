// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 1
// Problema planteado: Obtener la suma de la serie para n términos

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, valor = 4;
    cout << "Introduce el número de términos: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        suma += valor;
        if (i % 2 == 1) {
            valor += 2; 
            valor += 3;
        }
    }
    cout << "La suma de los primeros " << n << " términos es: " << suma << endl;
    return 0;
}