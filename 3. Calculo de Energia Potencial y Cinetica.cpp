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
	

    /* En esta apartado definiremos las diversas variables para la energ�a cin�tica inicial (Eci), la energ�a potencial inicial (EPi) y 
	la energ�a total inicial (ETi)*/
    double Eci, EPi, ETi;

    // Solicitaremos al usuario que ingrese los valores iniciales de energ�a cin�tica y energ�a potencial que desea
    cout << "Ingresa la energ�a cin�tica inicial: ";
    cin >> Eci;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    cout << "Ingresa la energ�a potencial inicial: ";
    cin >> EPi;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Calculamos la energ�a total inicial sumando la energ�a cin�tica y la energ�a potencial
    ETi = Eci + EPi;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Mostramos la energ�a total inicial al usuario
    cout << "La energ�a total inicial es: " << ETi << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Simulamos un proceso donde parte de la energ�a cin�tica se convierte en energ�a potencial
    double cambio = 20; // Cambio de energ�a cin�tica a energ�a potencial

    // Actualizamos los valores de energ�a cin�tica y energ�a potencial
    double Ec = Eci - cambio;
    double Ep = EPi + cambio;

    // Calculamos la energ�a total final sumando la nueva energ�a cin�tica y la nueva energ�a potencial
    double ETf = Ec + Ep;

    // Mostramos los resultados finales al usuario
    cout << "Despu�s del cambio, la energ�a cin�tica final es: " << Ec << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    cout << "Despu�s del cambio, la energ�a potencial final es: " << Ep << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    
    cout << "La energ�a total final es: " << ETf << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    

    return 0;
}

