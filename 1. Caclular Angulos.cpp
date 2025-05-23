#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Impresión de la carátula
    cout << "Facultad de Ingeniería en Sistemas de la información y ciencias de la computación" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Sección: A" << endl;
    cout << "Cálculo 1" << endl;
    cout << "Inge. Erick Eduardo Pérez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;
	
    double Angulo;
    
    cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Pedir al usuario que ingrese un ángulo en radianes
    cout << "\n Ingresa un ángulo en radianes: ";
    cin >> Angulo;

    // Calcular y mostrar el seno, coseno y tangente del ángulo
    cout << "\n Seno: " << sin(Angulo);
    cout << "\n Coseno: " << cos(Angulo);
    cout << "\n Tangente: " << tan(Angulo);

    return 0;
}

