// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 3
// Problema planteado: Realizar una funcion para determinar si un numero es capicua

#include <iostream>
using namespace std;

bool esCapicua(int num) {
    int original = num;
    int reverso = 0, digito;
    
    while (num > 0) {
        digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }
    
    return original == reverso;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    if (esCapicua(num)) {
        cout << num << " es un numero capicua" << endl;
    } else {
        cout << num << " no es un numero capicua" << endl;
    }
    
    return 0;
}