// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 4
// Problema planteado: Realizar una funcion para calcuolar el IMC

#include <iostream>
using namespace std;

void calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    cout << "El IMC es: " << imc << endl;
}

int main() {
    float peso, altura;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    
    calcularIMC(peso, altura);  
    return 0;
}