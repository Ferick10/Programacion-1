// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 10
// Problema planteado: Generar n numeros aleatorios entre 1 y 10000 y contar cuantos son primos

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, primos = 0;

    cout << "Cuántos números aleatorios quieres generar? ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int numero = rand() % 10000 + 1;
        if (esPrimo(numero)) {
            primos++;
        }
    }

    cout << "La cantidad de números primos generados es: " << primos << endl;

    return 0;
}