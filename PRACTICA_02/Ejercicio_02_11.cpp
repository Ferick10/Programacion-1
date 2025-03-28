// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 11
// Problema planteado: Calcular cuantos panales consumen n ninos de 1, 2 y 3 anios

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, ninos1, ninos2, ninos3;
    int panales1, panales2, panales3;

    cout << "Introduce el numero total de ninos (N): ";
    cin >> n;

    srand(time(0));
    ninos1 = rand() % (n + 1); 
    ninos2 = rand() % (n - ninos1 + 1); 
    ninos3 = n - ninos1 - ninos2; 

    panales1 = ninos1 * 6;
    panales2 = ninos2 * 3;
    panales3 = ninos3 * 2;

    int totalPanales = panales1 + panales2 + panales3;

    cout << "ninos de 1 anio: " << ninos1 << endl;
    cout << "ninos de 2 anios: " << ninos2 << endl;
    cout << "ninos de 3 anios: " << ninos3 << endl;

    cout << "Total de panales consumidos: " << totalPanales << " panales por día." << endl;

    return 0;
}