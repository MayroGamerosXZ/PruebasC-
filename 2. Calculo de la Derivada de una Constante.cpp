#include <iostream>

using namespace std;

int main() {
    // Impresión de la carátula
    cout << "Facultad de Ingeniería en Sistemas de la información y ciencias de la computación" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Sección: A" << endl;
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

    // Cálculo de la derivada de una constante (que siempre es 0)
    double derivada = 0;

    cout << "Para la función f(x) = " << constante << ", la derivada f'(x) es: " << derivada << endl;

    return 0;
}

