// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 6
// Problema planteado: Realizar una funcion para determinar cuantos días tiene un mes 
#include <iostream>
using namespace std;

int diasDelMes(int anio, int mes) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    }
    return 0;  
}

int main() {
    int anio, mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    int dias = diasDelMes(anio, mes);
    if (dias == 0) {
        cout << "Mes no valido" << endl;
    } else {
        cout << "El mes tiene " << dias << " dias." << endl;
    }
    
    return 0;
}