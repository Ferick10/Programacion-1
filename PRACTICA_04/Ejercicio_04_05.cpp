// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 5
// Problema planteado: calcular el salario de un trabajador incluyendo la bonificación

#include <iostream>
using namespace std;

void calcularSalario(double horas, double tarifa) {
    double salarioBase = 0;
    double bonificacion = 0;

    // Si el trabajador trabaja más de 8 horas
    if (horas > 8) {
        salarioBase = 8 * tarifa;  // Calcular salario base por las primeras 8 horas
        bonificacion = (horas - 8) * tarifa;  // Calcular bonificación por horas extra
    } else {
        salarioBase = horas * tarifa;  // Si no trabaja más de 8 horas, salario base es horas * tarifa
    }

    // Mostrar los resultados
    cout << "Salario del trabajador: " << salarioBase << endl;
    
    if (bonificacion > 0) {
        cout << "Bonificación por horas extras: " << bonificacion << endl;
    }
}

int main() {
    double horas, tarifa;

    // Solicitar datos al usuario
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa;

    // Calcular y mostrar salario y bonificación
    calcularSalario(horas, tarifa);

    return 0;
}