// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 3
// Problema planteado: crear una función que reciba un parámetro por valor y otro por referencia


#include <iostream>
using namespace std;

void modificarValores(int valor, int &referencia) {
    valor *= 2;
    referencia += 10;
    cout << "Valor modificado (por valor): " << valor << endl;
    cout << "Valor modificado (por referencia): " << referencia << endl;
}

int main() {
    int valor, referencia;
    cout << "Ingrese un valor: ";
    cin >> valor;
    cout << "Ingrese un valor de referencia: ";
    cin >> referencia;
    
    modificarValores(valor, referencia);

    return 0;
}