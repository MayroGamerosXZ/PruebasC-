//Regla de Producto y Cociente (Multiplicaci�n y Division)
#include <iostream>
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
	
	
	double Valor1; 
	double Valor2; 
	double Producto; 
	double Cociente;
	
	cout<<"\n Hola Usuario, bievenido, porfavor sigue las siguientes indicaciones"<<endl;
	cout<<"\n Para utilizar este programa, suerte"<<endl;

    // Pedir al usuario que ingrese dos n�meros
    cout <<"\n Ingresa el primer n�mero: ";
    cin >> Valor1;
    
    for(int i=0; i<3; i++)
    cout<<endl;
    
    
    cout <<"\n Ingresa el segundo n�mero: ";
    cin >> Valor2;
    
    for(int i=0; i<3; i++)
    cout<<endl;

    // F�rmula para Calcular el Producto y Cociente
    Producto = Valor1 * Valor2;
    Cociente = Valor1 / Valor2;

    // Mostrar el resultado
    cout <<"\n El producto de los n�meros es: " << Producto << endl;
    cout <<"\n El cociente de los n�meros es: " << Cociente << endl;

    return 0;
}

