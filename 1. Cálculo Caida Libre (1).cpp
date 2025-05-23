#include <iostream>
#include <cmath>

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
	
	const double gravedad = 9.81; // Aceleración debido a la gravedad en m/s^2
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

