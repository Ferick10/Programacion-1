// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 4
// Problema planteado:
// Convertir Celsius a Fahrenheit y determinar la mayor temperatura.

#include <iostream>
using namespace std;

double convertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;  
}

double mayorTemperatura(double temp1, double temp2) {
    return (temp1 > temp2) ? temp1 : temp2;  
}

int main() {
    double celsius, temp1, temp2;
    
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
    cout << "Temperatura en Fahrenheit: " << convertirCelsiusAFahrenheit(celsius) << endl;

    cout << "Ingrese la primera temperatura: ";
    cin >> temp1;
    cout << "Ingrese la segunda temperatura: ";
    cin >> temp2;
    cout << "La mayor temperatura es: " << mayorTemperatura(temp1, temp2) << endl;

    return 0;
}