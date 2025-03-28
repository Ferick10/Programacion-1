// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 9
// Problema planteado: Leer un valor que represente una cierta cantidad de dinero convertir  en billetes y monedas

#include <iostream>
using namespace std;

void convertirDinero(int monto) {
    int billetes200 = monto / 200;
    monto %= 200;
    int billetes50 = monto / 50;
    monto %= 50;
    int monedas5 = monto / 5;
    monto %= 5;

    cout << billetes200 << " billetes de 200 Bs." << endl;
    cout << billetes50 << " billetes de 50 Bs." << endl;
    cout << monedas5 << " monedas de 5 Bs." << endl;
}

int main() {
    int monto;
    cout << "Ingrese el monto en Bs: ";
    cin >> monto;
    convertirDinero(monto);
    return 0;
}