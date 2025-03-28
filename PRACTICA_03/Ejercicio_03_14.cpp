// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 14
// Problema planteado: Simulacion de un cajero automatico

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Saldo insuficiente!" << endl;
        return saldo;
    }
    if (cantidad % 10 != 0) {
        cout << "La cantidad a retirar debe ser multiplo de 10." << endl;
        return saldo;
    }
    saldo -= cantidad;
    cout << "Retiro exitoso. Saldo restante: " << saldo << endl;
    return saldo;
}

int main() {
    double saldo = 1000;  
    double cantidad;
    
    cout << "Saldo disponible: 1000 Bs." << endl;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;
    
    saldo = retirarDinero(saldo, cantidad);
    return 0;
}