// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 7
// Problema planteado: Realizar una funcion para mostrar cuantos digitos tiene

#include <iostream>
using namespace std;

void contarDigitos(int num) {
    int contador = 0;
    
    if (num < 0) {
        num = -num; 
    }

    do {
        contador++;
        num /= 10;
    } while (num != 0);
    
    cout << "El numero tiene " << contador << " digitos." << endl;
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    contarDigitos(num);
    return 0;
}