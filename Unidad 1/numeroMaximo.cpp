#include <iostream>
using namespace std;

void calcularMaxSqrt() {


	int numero;
	int maximo;
	double raizCuadrada;

	for (int i = 0; i < 10; i++) {
		cout << "ingrese el numero" << (i + 1) << ": ";
		cin >> numero;
		if (i == 0)
			maximo = numero;
		if (numero > maximo)
			maximo = numero;

	}
	raizCuadrada = sqrt(maximo);
	
	cout << "El valor maximo es:" << maximo << endl;
	cout << "Su raiz cuadrada es:" << raizCuadrada << endl;
	



	
}
void obtenerDigitos() {
	cout << "Ingrese una cadena de texto o digitos sin espacios: ";
	string cadena;
	char caracter;
	cin >> cadena;
	int i = 0;
	while (i < cadena.length()) {
		caracter = cadena.at(i);
		if (isdigit(caracter))
			cout << caracter << endl;
		i++;
	}
}

int main() {
	obtenerDigitos();
	return 0;
}
