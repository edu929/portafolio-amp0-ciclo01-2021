//ordenamiento por mezcla en c++
#include <iostream>
using namespace std;

//imprimir el arreglo
void imprimirArreglo(int arr[], int size){
	for(int i = 0;  i < size;  i++)
	cout << arr[i] << " ";
	cout << endl;
}

//combinar dos subarreglos L y M en arr
void merge(int arr[], int low, int med, int high){
	
	//Crear L? A[low... med] y M? [med + 1...high]
	int n1 = med - low + 1;
	int n2 = high - med;
	
	int L[n1], M[n2];
	
	for(int i = 0; i < n1; i++)
	L[i] = arr[low + 1];
	for(int j =0; j < n2; j++)
	M[j] = arr[med + 1 + j];
	
	//Manter los indices actuales de los subarreglos y el arreglo principal
	int i, j, k;
	i = 0;
	j = 0;
	k = low;
	
	
	// Hasta que alcancemos el final de L o  de M, escoger el mayor numero
	// de elementos de L y M colocarlos en la posicion correcta arr[low...high]
	while(i < n1 && j < n2){
	if(L[i] < M[j]){
		arr[k] = L[i];
		i++;
	} else {
		arr[k] = M[j];
	}
	k++;
}

//cuando se nos terminan los elementos de L o M
//seleccionar los elementos restantes y colocarlos en arr[log...high]

while(i < n1){
	arr[k] = L [i];
	i++;
	k++;
}

while (j < n2){
	arr[k] = M[j];
	j++;
	}

}

//Dividir el arreglo en dos sub arreglos, ordenarlos y combinarlos
void mergeSort(int arr[], int low, int high){
	if(low < high){
		int med = low + (high - low)/2;
		//El punto medio es donde el arreglo sera dividido entre dos sub arrays
		mergeSort(arr, low,med);
		mergeSort(arr, med + 1, high);
		
		//mezclar los arreglos ordenados
		merge(arr, low, med, high);
	}
}

int main(){
	int arr[] = {6,5,12,10,9,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0 , size -1);
	cout << "Arreglo ordenado: \n";
	imprimirArreglo(arr, size);
	return 0;
}
