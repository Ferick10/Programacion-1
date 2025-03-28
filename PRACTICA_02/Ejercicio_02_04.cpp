// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 4
// Problema planteado: Simular el lanzamiento de una moneda n veces

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, caras = 0, cruces = 0;

    cout << "Cuántos lanzamientos de moneda quieres hacer? ";
    cin >> n;

    srand(time(0));

    for (int i = 1; i <= n; i++) {
        int lanzamiento = rand() % 2; 
        if (lanzamiento == 1) {
            caras++;
        } else {
            cruces++;
        }
    }

    cout << "Porcentaje de caras: " << (caras * 100.0 / n) << "%" << endl;
    cout << "Porcentaje de cruces: " << (cruces * 100.0 / n) << "%" << endl;
    return 0;
}