// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 9
// Problema planteado: Generar N números aleatorios entre 1 y 1000 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    int suma = 0, mayor = 0, menor = 1001;

    cout << "Cuantos numeros aleatorios quieres generar? ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int numero = rand() % 1000 + 1;
        suma += numero;
        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;

        cout << numero << " ";
    }

    cout << "\nLa sumatoria es: " << suma << endl;
    cout << "El promedio es: " << (float)suma / n << endl;
    cout << "El mayor valor generado es: " << mayor << endl;
    cout << "El menor valor generado es: " << menor << endl;

    return 0;
}