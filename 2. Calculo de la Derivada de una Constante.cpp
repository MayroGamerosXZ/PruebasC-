#include <iostream>

using namespace std;

int main() {
    // Impresi�n de la car�tula
    cout << "Facultad de Ingenier�a en Sistemas de la informaci�n y ciencias de la computaci�n" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Secci�n: A" << endl;
    cout << "Calculo 1" << endl;
    cout << "Inge. Erick Eduardo Perez Aguilar" << endl;
    cout << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;

    // Solicitud de ingreso al usuario para definir el valor de la constante
    double constante;
    cout << "Ingrese el Valor de la constante: ";
    cin >> constante;

    // C�lculo de la derivada de una constante (que siempre es 0)
    double derivada = 0;

    cout << "Para la funci�n f(x) = " << constante << ", la derivada f'(x) es: " << derivada << endl;

    return 0;
}

