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
    cout << "Inge. Erick Eduardo P�rez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;
	
    double Angulo;
    
    cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Pedir al usuario que ingrese un �ngulo en radianes
    cout << "\n Ingresa un �ngulo en radianes: ";
    cin >> Angulo;

    // Calcular y mostrar el seno, coseno y tangente del �ngulo
    cout << "\n Seno: " << sin(Angulo);
    cout << "\n Coseno: " << cos(Angulo);
    cout << "\n Tangente: " << tan(Angulo);

    return 0;
}

