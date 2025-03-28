#include <iostream>
using namespace std;

float calcularSueldoBasico(int antiguedad) {
    if (antiguedad < 1) {
        return 2000; 
    } else if (antiguedad <= 3) {
        return 2500; 
    } else {
        return 3000; 
    }
}

float calcularComision(float totalVendido) {
    return totalVendido * 0.10; 
}

float calcularTotalVendido(float precioProducto, int cantidadVendida) {
    return precioProducto * cantidadVendida; 
}

float calcularSueldoTotal(float sueldoBasico, float comision) {
    return sueldoBasico + comision; 
}

int main() {
    int n;
    cout << "Introduce el número de vendedoras: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        float sueldoBasico, precioProducto, comision, totalVendido, sueldoTotal;
        int cantidadVendida, antiguedad;

        cout << "\nVendedora " << i + 1 << ":" << endl;

        cout << "Introduce la antigüedad de la vendedora en años: ";
        cin >> antiguedad;

        sueldoBasico = calcularSueldoBasico(antiguedad);

        cout << "Introduce el precio de cada producto (en Bs): ";
        cin >> precioProducto;

        cout << "Introduce la cantidad de productos vendidos en el mes: ";
        cin >> cantidadVendida;

        totalVendido = calcularTotalVendido(precioProducto, cantidadVendida);

        comision = calcularComision(totalVendido);

        sueldoTotal = calcularSueldoTotal(sueldoBasico, comision);

        cout << "\nSueldo básico según antigüedad: Bs " << sueldoBasico << endl;
        cout << "Comisión por ventas: Bs " << comision << endl;
        cout << "Sueldo total a pagar a la vendedora: Bs " << sueldoTotal << endl;
    }

    return 0;
}