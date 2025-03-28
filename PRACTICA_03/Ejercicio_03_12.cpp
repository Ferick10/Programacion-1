// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 12
// Problema planteado: Realizar una función que al enviar el tiempo total en minutos

#include <iostream>
using namespace std;

void calcularTiempoExtra(int minutosTotales) {
    int jornadaLaboral = 8 * 60; 
    int diferencia = minutosTotales - jornadaLaboral;

    if (diferencia > 0) {
        cout << "Ha trabajado " << diferencia << " minutos extra." << endl;
    } else if (diferencia < 0) {
        cout << "Debe " << -diferencia << " minutos a la empresa." << endl;
    } else {
        cout << "Ha trabajado exactamente la jornada laboral." << endl;
    }
}

int main() {
    int minutos;
    cout << "Ingrese el total de minutos trabajados: ";
    cin >> minutos;
    calcularTiempoExtra(minutos);
    return 0;
}