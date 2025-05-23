#include <iostream>

using namespace std;

int main() {
    // Impresión de la carátula
    cout << "Facultad de Ingeniería en Sistemas de la información y ciencias de la computación" << endl;
    cout << "Proyecto Final" << endl;
    cout << "III Ciclo" << endl;
    cout << "Sección: A" << endl;
    cout << "Física 1" << endl;
    cout << "Inge. Erick Eduardo Perez Aguilar" << endl;
    cout << "Mayro Geovanni Barrios Gameros: 2890-23-11428" << endl;
    cout << "25 de mayo del 2024" << endl;
    cout << endl;
	

    /* En esta apartado definiremos las diversas variables para la energía cinética inicial (Eci), la energía potencial inicial (EPi) y 
	la energía total inicial (ETi)*/
    double Eci, EPi, ETi;

    // Solicitaremos al usuario que ingrese los valores iniciales de energía cinética y energía potencial que desea
    cout << "Ingresa la energía cinética inicial: ";
    cin >> Eci;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    cout << "Ingresa la energía potencial inicial: ";
    cin >> EPi;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Calculamos la energía total inicial sumando la energía cinética y la energía potencial
    ETi = Eci + EPi;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Mostramos la energía total inicial al usuario
    cout << "La energía total inicial es: " << ETi << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;

    // Simulamos un proceso donde parte de la energía cinética se convierte en energía potencial
    double cambio = 20; // Cambio de energía cinética a energía potencial

    // Actualizamos los valores de energía cinética y energía potencial
    double Ec = Eci - cambio;
    double Ep = EPi + cambio;

    // Calculamos la energía total final sumando la nueva energía cinética y la nueva energía potencial
    double ETf = Ec + Ep;

    // Mostramos los resultados finales al usuario
    cout << "Después del cambio, la energía cinética final es: " << Ec << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    cout << "Después del cambio, la energía potencial final es: " << Ep << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    
    cout << "La energía total final es: " << ETf << endl;
    
    //For para dar un salto de 5 Lineas
    for(int i=0; i<3; i++)
    cout<< endl;
    

    return 0;
}

