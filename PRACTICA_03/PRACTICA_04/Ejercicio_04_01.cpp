// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 1
// Problema planteado: crear una función que reciba dos parámetros por referencia y los intercambie entre si

#include <iostream>
using namespace std;

void intercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    
    cout << "Antes de intercambiar: a = " << a << ", b = " << b << endl;
    intercambiarValores(a, b);
    cout << "Después de intercambiar: a = " << a << ", b = " << b << endl;

    return 0;
}