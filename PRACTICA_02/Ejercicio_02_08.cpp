// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 8
// Problema planteado: Generar patrones de numeros

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Introduce el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j;
  
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}