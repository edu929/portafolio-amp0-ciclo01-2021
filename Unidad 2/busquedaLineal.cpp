#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 5> numeros = { 3,5,1,4,2 };
	int valorBuscado = 5;
	int indice = -1;
	int inferior = 0;
	int superior = (int)numeros.size() - 1;
	int medio;

	while (inferior <= superior){

		medio = inferior + (superior - inferior) / 2;
			if (valorBuscado < numeros[medio]) inferior = medio - 1;
			else if (valorBuscado > numeros[medio]) inferior = medio + 1;
			else if (valorBuscado == numeros[medio]) indice = medio;
			else {
				indice = medio;
				break;
			}
	}
	
	cout << "Indice del valor" << valorBuscado << "   ;    " << indice << endl;
}
