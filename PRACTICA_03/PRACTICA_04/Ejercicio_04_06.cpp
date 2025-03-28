// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 6
// Problema planteado: leer un número entero y determinar si las sumas de sus dígitos forman un número primo

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;  
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;  
    }
    return true;
}

int sumarDigitosDistintosDeCero(int numero) {
    int suma = 0;
    while (numero != 0) {
        int digito = numero % 10;  
        if (digito != 0) {
            suma += digito;  
        }
        numero /= 10;  
    }
    return suma;
}

int main() {
    int numero;
    
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    int suma = sumarDigitosDistintosDeCero(numero);
    
    if (esPrimo(suma)) {
        cout << "La suma de los dígitos distintos de cero es un número primo." << endl;
    } else {
        cout << "La suma de los dígitos distintos de cero no es un número primo." << endl;
    }

    return 0;
}