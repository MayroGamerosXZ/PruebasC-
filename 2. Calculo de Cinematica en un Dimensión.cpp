#include <iostream>

using namespace std;

int main() {
    // Impresi�n de la car�tula
    cout << "Facultad de Ingenier�a en Sistemas de la informaci�n y ciencias de la computaci�n" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Secci�n: A" << endl;
    cout << "F�sica 1" << endl;
    cout << "Inge. Erick Eduardo Perez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;    
	
	double Posicion_inicial; 
	double Velocidad_inicial; 
	double Aceleracion; 
	double Tiempo;
    double Posicion_final; 
	double Velocidad_final;

    // Pedir al usuario que ingrese los valores iniciales
    cout << "Ingresa la posici�n inicial (m): ";
    cin >> Posicion_inicial;
    cout << "Ingresa la velocidad inicial (m/s): ";
    cin >> Velocidad_inicial;
    cout << "Ingresa la aceleraci�n (m/s^2): ";
    cin >> Aceleracion;
    cout << "Ingresa el tiempo (s): ";
    cin >> Tiempo;

    // Calcular la posici�n final y la velocidad final
    Posicion_final = Posicion_inicial + Velocidad_inicial * Tiempo + 0.5 * Aceleracion * Tiempo * Tiempo;
    Velocidad_final = Velocidad_inicial + Aceleracion * Tiempo;

    // Mostrar la posici�n final y la velocidad final
    cout << "La posici�n final es: " << Posicion_final << " m";
    cout << "La velocidad final es: " << Velocidad_final << " m/s";

    return 0;
}

