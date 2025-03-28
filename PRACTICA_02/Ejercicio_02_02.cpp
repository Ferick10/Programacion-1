// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 2
// Problema planteado: lanzamiento de un dado n veces y repetición de las caras pares.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, carasPares = 0;

    cout << "Cuántos lanzamientos del dado quieres hacer? ";
    cin >> n;
    srand(time(0)); 
    for (int i = 1; i <= n; i++) {
        int cara = rand() % 6 + 1; 
        if (cara % 2 == 0) {
            carasPares++;
        }
    }

    cout << "Las caras pares salieron " << carasPares << " veces." << endl;
    return 0;
}