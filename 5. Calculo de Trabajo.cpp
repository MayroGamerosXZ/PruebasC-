#include <iostream>
using namespace std;
//Declaración de Variables de Valor para el Trbabajo
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
    
    
    double Masa; 
	double Aceleracion; 
	double Fuerza;
	
	cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Solicitar al usuario que ingrese la masa y la aceleración que desea
    cout<<"\n Ingresa la masa (kg): ";
    cin >> Masa;
    
    cout <<"\n Ingresa la aceleración (m/s^2): ";
    cin >> Aceleracion;

    // Fómrula para el calculo de  la fuerza utilizando la Segunda Ley de Newton (F = m * a)
    Fuerza = Masa * Aceleracion;

    // Mostrar en pantalla la cantidad de la fuerza resultante empleada
    cout << "\n La fuerza resultante es: " << Fuerza << " N" <<endl;

    return 0;
}

