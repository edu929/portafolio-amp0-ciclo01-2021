#include <iostream>
#include <array>
using namespace std;
int main(){
	array<int,7> numeros = {1,2,3,4,5,6,7};
	int inferior = 0;
	int superior = (int)numeros.size() -1;
	int medio;
	int valorBuscado = 3;
	int indice = -1;
	while(inferior <= superior){
		cout << "inf " << inferior << "sup " << superior << " ind " << indice << " med "
		<< medio << " value " << numeros[medio] << endl;
		medio = inferior + (superior - inferior)/2;
		if (valorBuscado == numeros[medio]){
			indice = medio;
			break;
		}
		else if (valorBuscado > numeros[medio]){
			inferior = medio + 1;
		}
		else if (valorBuscado < numeros[medio]){
			superior = medio -1;
		}
		else{
			cout << "ERROR";
		}
	}
	cout << "Indice del valor" << valorBuscado << " : " << indice << endl;
	return 0;
}
