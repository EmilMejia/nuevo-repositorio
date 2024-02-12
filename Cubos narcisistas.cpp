// Cubos narcisistas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 Asignatura: IDS343L-1-LABORATORIO ESTRUCTURAS DE DATOS Y ALGORITMOS I
 
 Docente: CASIMIRO GILBERTO CORDERO RAMIREZ
 
 Estudiantes: 

 - Axel Félix 1106662
 - Ricardo Acosta 1104082
 - Wilbert Leon 1105634
 - Irving Ovalles 1106075 
 - Emil Mejia 1106101
 
 Evidencia: Cubos narcisistas
 
 Fecha: 14/08/2022
*/

#include <iostream>
#include <math.h>

using namespace std;

//Prototipo de las funciones
void CalcularCubos(int entrada);

int main()
{
    int num; //Declaracion de variables
    
    cout << "Los 4 cubos nacisistas entre el 100 y el 999 son:" << endl;
    cout << endl;

    for (num = 100; num < 1000; num++) // Bucle que recorre los números del 100 al 999
    {
        CalcularCubos(num);
    }

    cout << "\nFin del programa" << endl;
    
    return 0;
}

void CalcularCubos(int entrada) // Función que evalúa si el número es un cubo narcisista
{
    int digito1, digito2, digito3;

    digito1 = entrada / 100;  // Extrae el número de las centenas.
    digito2 = (entrada % 100) / 10;  // Extrae el número de las decenas.
    digito3 = entrada % 10;  // Extrae el número de las unidades.

    int oper = pow(digito1, 3) + pow(digito2, 3) + pow(digito3, 3);  // Elevacion y suma de los números.

    if (entrada == oper)  // Comprueba de que el número sea un cubo narcisista.
    {
        cout << entrada << " es un cubo narcisista" << endl;
    }
}

