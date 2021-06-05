#include <iostream>

using namespace std;

void imprimirArreglo(int numeros[]){
	for (int i = 0; i < 5; i++){
		cout << "numeros[" << i << "] : ";
		cout << numeros[i] << " " << endl;
	}
	cout << endl;
}

int main (){
	
	int numeros[5] = {19,10,8,17,9};
	
	imprimirArreglo(numeros);
	
	//cambiando el elemento en la posicion 3 (4to elemento)
	numeros[3] = 35;
	
	imprimirArreglo(numeros);
	
	cout << "Ingrese el valor numeros[4]: ";
	cin >> numeros[4];
}
