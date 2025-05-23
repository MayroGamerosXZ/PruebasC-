#include <iostream>
#include <cmath>

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
	
	const double gravedad = 9.81; // Aceleraci�n debido a la gravedad en m/s^2
    double alturaInicial;
    
    cout << "Ingresa la altura inicial en metros: ";
    cin >> alturaInicial;

    // Calcular el tiempo que tarda en caer el objeto desde la altura inicial
    double tiempo = sqrt(2 * alturaInicial / gravedad);

    // Calculamos la velocidad final al llegar al suelo
    double velocidadFinal = gravedad * tiempo;

    // Mostramos los resultados al usuario
    cout << "El objeto tarda " << tiempo << " segundos en caer." << endl;
    cout << "La velocidad final al llegar al suelo es de " << velocidadFinal << " m/s." << endl;

    return 0;
}

