// Materia: Programación I, Paralelo 3
// Autor: Fernando Erick Quispe Ichuta
// Fecha creación: 27/02/2025
// Número de ejercicio: 8
// Problema planteado: Generar aleatoriamente las edades de n alumnos, mostrar la edad y la estatura media

#include <iostream>
#include <cstdlib>
using namespace std;

void generarEstudiantes(int N) {
    int edad, altura, mayorDe18 = 0, mayor175 = 0;
    float totalEdad = 0, totalAltura = 0;

    for (int i = 0; i < N; i++) {
        edad = rand() % 35 + 1; 
        altura = rand() % 81 + 120; 
        
        totalEdad += edad;
        totalAltura += altura;

        if (edad > 18) mayorDe18++;
        if (altura > 175) mayor175++;

        cout << "Alumno " << i + 1 << ": Edad = " << edad << ", Altura = " << altura << " cm" << endl;
    }

    float promedioEdad = totalEdad / N;
    float promedioAltura = totalAltura / N;

    cout << "\nEdad media: " << promedioEdad << endl;
    cout << "Altura media: " << promedioAltura << " cm" << endl;
    cout << "Alumnos mayores de 18 años: " << mayorDe18 << endl;
    cout << "Alumnos que miden más de 1.75 cm: " << mayor175 << endl;
}

int main() {
    int N;
    cout << "Ingrese el número de alumnos: ";
    cin >> N;
    generarEstudiantes(N);
    return 0;
}