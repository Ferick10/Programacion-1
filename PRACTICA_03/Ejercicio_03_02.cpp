// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 2
// Problema planteado: Realizar una funcion para convertir grados celsios fahrenheit

#include <iostream>
using namespace std;

void celsiusAFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " grados celsius es igual a " << fahrenheit << " grados fahrenheit." << endl;
}

int main() {
    float celsius;
    cout << "Ingrese la temperatura en grados celsius: ";
    cin >> celsius;
    celsiusAFahrenheit(celsius);
    return 0;
}