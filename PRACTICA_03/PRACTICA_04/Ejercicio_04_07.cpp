// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 7
// Problema planteado: calcular el maximo comun divisor y el minimo Común multiplo de dos numeros enteros

#include <iostream>
using namespace std;

int calcularMCD(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int calcularMCM(int m, int n, int mcd) {
    return (m * n) / mcd;
}

int main() {
    int m, n;
    
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int mcd = calcularMCD(m, n);

    int mcm = calcularMCM(m, n, mcd);

    cout << "El Máximo Común Divisor (MCD) de " << m << " y " << n << " es: " << mcd << endl;
    cout << "El Mínimo Común Múltiplo (MCM) de " << m << " y " << n << " es: " << mcm << endl;

    return 0;
}