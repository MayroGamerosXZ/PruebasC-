#include <iostream>
using namespace std;

int main() {
    // Impresión de la carátula
    cout << "Facultad de Ingeniería en Sistemas de la información y ciencias de la computación" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Sección: A" << endl;
    cout << "Física 1" << endl;
    cout << "Inge. Erick Eduardo Pérez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;
    
    
    double Distancia;
	double Tiempo; 
	double Velocidad;
	
	cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Solcitar al usuario que ingrese la distancia recorrida y el tiempo tomado
    cout << "\n Ingresa la distancia recorrida (mt): ";
    cin >> Distancia;
    cout << "\n Ingresa el tiempo tomado (s): ";
    cin >> Tiempo;

    // Calcular la velocidad (Velocidad = Distancia / Tiempo)
    Velocidad = Distancia / Tiempo;

    // Mostrar la velocidad resultante
    cout << "\n La velocidad promedio es: " << Velocidad << " m/s";

    return 0;
}

