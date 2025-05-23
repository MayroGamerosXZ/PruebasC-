//Regla de Producto y Cociente (Multiplicación y Division)
#include <iostream>
using namespace std;

int main() {
    // Impresión de la carátula
    cout << "Facultad de Ingeniería en Sistemas de la información y ciencias de la computación" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Sección: A" << endl;
    cout << "Cálculo 1" << endl;
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

    // Pedir al usuario que ingrese dos números
    cout <<"\n Ingresa el primer número: ";
    cin >> Valor1;
    
    for(int i=0; i<3; i++)
    cout<<endl;
    
    
    cout <<"\n Ingresa el segundo número: ";
    cin >> Valor2;
    
    for(int i=0; i<3; i++)
    cout<<endl;

    // Fórmula para Calcular el Producto y Cociente
    Producto = Valor1 * Valor2;
    Cociente = Valor1 / Valor2;

    // Mostrar el resultado
    cout <<"\n El producto de los números es: " << Producto << endl;
    cout <<"\n El cociente de los números es: " << Cociente << endl;

    return 0;
}

