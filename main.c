/*
 * Autor: Rodrigo Perez Solis
 * Fecha: 22 de agosto 2018
 * Este programa resuelve sumas restas multiplicaciones y divisiones
 */

#include <stdio.h>

int main() {
// Declaracion de las variables.
    double num1;
    double num2;
    double suma;
    double resta;
    double multipli;
    double divi;
// Le pido al usuario que introduzca los numeros
// que quieran sumar restar multiplicar o dividir
    printf("Dame el primer numero:");
    scanf("%lf", &num1);
    printf("Dame el segundo numero:");
    scanf("%lf", &num2);
// En esta parte los valores son asignados a
// sus variables
    suma = num1 + num2;
    resta = num1 - num2;
    multipli = num1 * num2;
    divi = num1 / num2;

// Se pone en la pantalla el resultado de cada operacion.
    printf("Los resultados son:\n");
    printf("Suma: %lf\n", suma);
    printf("Resta: %lf\n", resta);
    printf("Multiplicacion: %lf\n", multipli);
    printf("Division: %lf\n", divi);
    return 0;
}