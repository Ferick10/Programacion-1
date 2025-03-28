// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 28/03/2025
// Número de ejercicio: 8
// Problema planteado: la comercial 'La Estrella' 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double generarPrecioProducto() {
    return (rand() % 31) + 20; 
}

void calcularVentas(int n) {
    double totalVentas = 0.0;
    double ivaTotal, totalConIVA, descuento = 0.0;

    for (int i = 0; i < n; i++) {
        double precioProducto = generarPrecioProducto();
        totalVentas += precioProducto;
    }

    ivaTotal = totalVentas * 0.13;
    totalConIVA = totalVentas + ivaTotal;

    if (totalConIVA > 2500) {
        descuento = totalConIVA * 0.05;
        totalConIVA -= descuento;  
    }

    cout << "Total de ventas sin IVA: " << totalVentas << " Bs" << endl;
    cout << "IVA total: " << ivaTotal << " Bs" << endl;
    cout << "Total con IVA: " << totalConIVA + descuento << " Bs" << endl; 
    if (descuento > 0) {
        cout << "Descuento aplicado: " << descuento << " Bs" << endl;
    }
    cout << "Monto total a pagar con descuento : " << totalConIVA << " Bs" << endl;
}

int main() {
    srand(time(0));  

    int n;
    cout << "Ingrese el número de productos vendidos en el día: ";
    cin >> n;

    calcularVentas(n);

    return 0;
}