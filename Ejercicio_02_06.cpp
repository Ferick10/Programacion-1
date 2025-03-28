// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 26/03/2025
// Número de ejercicio: 6
// Problema planteado: Adivinar un número generado aleatoriamente 

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int numeroPensado, intento, limiteInferior = 0, limiteSuperior = 50;

    srand(time(0));
    numeroPensado = rand() % 51; // Número aleatorio entre 0 y 50

    cout << "Estoy pensando un número entre " << limiteInferior << " y " << limiteSuperior << " Adivínalo" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Intento " << i << ": ";
        cin >> intento;

        if (intento < numeroPensado) {
            cout << "El número está entre " << intento << " y " << limiteSuperior << endl;
            limiteInferior = intento;
        } else if (intento > numeroPensado) {
            cout << "El número está entre " << limiteInferior << " y " << intento << endl;
            limiteSuperior = intento;
        } else {
            cout << "Adivinaste el número" << endl;
            break;
        }
    }

    return 0;
}