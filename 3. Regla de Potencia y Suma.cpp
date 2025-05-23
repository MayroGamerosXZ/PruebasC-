#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Impresi�n de la car�tula
    cout << "Facultad de Ingenier�a en Sistemas de la informaci�n y ciencias de la computaci�n" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Secci�n: A" << endl;
    cout << "C�lculo 1" << endl;
    cout << "Inge. Erick Eduardo Perez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;

    double base;
    double exponente;
    double resultado;

    cout << "\n Hola Usuario, bienvenido, por favor sigue las siguientes indicaciones" << endl;
    cout << "\n Para utilizar este programa, suerte" << endl;

    // For para dar un salto de 3 l�neas
    for (int i = 0; i < 3; i++)
        cout << endl;

    // Mensaje de Solicitud para que el Usuario ingrese el N�mero que Desea como Base
    cout << "\n Ingresa la base: ";
    cin >> base;

    // For para dar un salto de 3 l�neas
    for (int i = 0; i < 3; i++)
        cout << endl;

    // Mensaje para que el Usuario ingrese el N�mero designado al Exponente
    cout << "\n Ingresa el exponente: ";
    cin >> exponente;

    for (int i = 0; i < 3; i++)
        cout << endl;

    // Funci�n para calcular la potencia
    resultado = pow(base, exponente); // Se utiliza la funci�n pow() de la biblioteca cmath

    // Mostrar el resultado
    cout << "\n El resultado de " << base << " elevado a " << exponente << " es: " << resultado << " Unidades " << endl;

    return 0;
}
