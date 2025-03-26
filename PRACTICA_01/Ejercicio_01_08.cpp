// Materia: Programación I, Paralelo 1

// Autor: Fernando Erick Quispe Ichuta

// Fecha creación: 24/03/2025

// Número de ejercicio: 8

// Problema planteado: Vocal o consonante

#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingresa una letra: ";
    cin >> letra;
    if (letra == 'a') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'e') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'i') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'o') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'u') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'A') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'E') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'I') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'O') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'U') {
        cout << "Es una vocal" << endl;
    }
    else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        cout << "Es una consonante" << endl;
    }
    else {
        cout << "Es un carácter especial" << endl;
    }

    return 0;
}