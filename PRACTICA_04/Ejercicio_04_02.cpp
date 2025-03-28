// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 2
// Problema planteado: crear una funcion que calcule el volumen de un cilindro

#include <iostream>
#include <cmath>
using namespace std;

double calcularVolumen(double radio, double altura = 10)
{
    return M_PI * pow(radio, 2) * altura;
}

int main() {
    double radio;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "El volumen del cilindro es: " << calcularVolumen(radio) << endl;
    return 0;
}
