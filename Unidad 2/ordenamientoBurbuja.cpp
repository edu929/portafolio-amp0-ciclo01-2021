//ordenamiento de burbuja      - bubble sort
#include <iostream>
using namespace std;

void imprimirArreglo(int array[], int size){
	for (int i = 0; i < size; ++i){
		cout << " | " << array[i];
	}
	cout << " | \n";
}

void ordenamientoBurbuja(int array[], int size){
	//correr dos cubles uno para consultar el array
	//y el otro para comparaciones
	for(int paso = 0; paso < size -1; ++paso){
		for (int i = 0; i < size - paso - 1; ++i){
			
		
		//para ordenar de forma ascendente (1,2,3,4,5,) i > i+1
		//para ordenar de forma descendente (5,4,3,2,1) i < i +1
		if (array[i] > array[i + 1]){
			//cambiarles de posicion - swap
			int temporal = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temporal;
			//imprimirarreglo(array, size);
		}
	}
}
}


int main(){
	int data[] = {-2, 45 , 0, 11, -9, 7, 3, 86};
	int size = sizeof(data)/sizeof(data[0]);
	cout << "Arreglo Inicial: \n";
	imprimirArreglo(data, size);
	ordenamientoBurbuja(data , size);
	cout << "Arreglo ordenado de forma Ascedente: \n";
	imprimirArreglo(data, size);	
	return 0;	
}
