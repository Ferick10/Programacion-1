// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 10
// Problema planteado: Realizar una funcion para calcular una serie matematica

#include <iostream>
using namespace std;

int calcularSerie(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "La suma de la serie es: " << calcularSerie(n) << endl;
    return 0;
}