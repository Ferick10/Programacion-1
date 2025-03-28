// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 1
// Problema planteado: Realizar una funcion para determinar si un numero es par o impar

#include <iostream>
using namespace std;

void parOimpar(int num) {
    if (num % 2 == 0) {
        cout << num << " es par" << endl;
    } 
    else 
    {
        cout << num << " es impar" << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    parOimpar(num);
    return 0;
}