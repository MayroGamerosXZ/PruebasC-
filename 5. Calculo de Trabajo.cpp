#include <iostream>
using namespace std;
//Declaraci�n de Variables de Valor para el Trbabajo
int main() {
    // Impresi�n de la car�tula
    cout << "Facultad de Ingenier�a en Sistemas de la informaci�n y ciencias de la computaci�n" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Secci�n: A" << endl;
    cout << "F�sica 1" << endl;
    cout << "Inge. Erick Eduardo P�rez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;
    
    
    double Masa; 
	double Aceleracion; 
	double Fuerza;
	
	cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Solicitar al usuario que ingrese la masa y la aceleraci�n que desea
    cout<<"\n Ingresa la masa (kg): ";
    cin >> Masa;
    
    cout <<"\n Ingresa la aceleraci�n (m/s^2): ";
    cin >> Aceleracion;

    // F�mrula para el calculo de  la fuerza utilizando la Segunda Ley de Newton (F = m * a)
    Fuerza = Masa * Aceleracion;

    // Mostrar en pantalla la cantidad de la fuerza resultante empleada
    cout << "\n La fuerza resultante es: " << Fuerza << " N" <<endl;

    return 0;
}

