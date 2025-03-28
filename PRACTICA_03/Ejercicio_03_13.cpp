// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 13
// Problema planteado: Determinar el precio de un taxi según la distancia recorrida

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 5.0;
    double precioPorKm = 1.50;
    double precioTotal = tarifaBase + (kmRecorridos * precioPorKm);
    
    if (kmRecorridos > 10) {
        precioTotal *= 0.90;  
    
    return precioTotal;
}

int main() {
    double km;
    cout << "Ingrese los kilómetros recorridos: ";
    cin >> km;
    cout << "La tarifa total es: $" << calcularTarifa(km) << endl;
    return 0;
}