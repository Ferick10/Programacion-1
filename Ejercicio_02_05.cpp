// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 5
// Problema planteado: Generar un número aleatorio entre 1 y 10 y calcular su factorial

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num, factorial = 1;

    srand(time(0));
    num = rand() % 10 + 1; 

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El número aleatorio que salió es: " << num << endl;
    cout << "El factorial de " << num << " es: " << factorial << endl;
    return 0;
}