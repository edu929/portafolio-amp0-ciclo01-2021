
#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
	using namespace std;
	int magico;
	int intento;
	char respuesta;
	//funcion que inicializa la generacion de numeros aleatorios
	srand(time(0));
	//numero aleatorio extraido del generador en un rango desde 10 a 1
	magico = rand() % 10 + 1;
	cout << "Adivina el numero magico:";
	cin >> intento;


	if (magico == intento) {
		cout << "Correcto! como lo supiste?" << endl;
	} else if (magico > intento) {
		cout << "incorrecto. el numero es mayor que " << intento << endl;
		
		} else { 
		cout << "incorrecto. el numero es menor que " << intento << endl;

		}

	cout << "quieres saber cual era el numero (y/n): ";
	cin >> respuesta;
	if (respuesta == 'y') {
		cout << "el numero secreto era: " << magico << endl;

	}
	else if (respuesta == 'n') {
		cout << "bueno, esta bien. intentalo de nuevo " << endl;
	}
	}

