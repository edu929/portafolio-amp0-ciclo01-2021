#include <iostream>
using namespace std;

void imprimirArreglo(int arr[][3][2], int filas, int columnas, int profundidad){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			for(int k = 0; k < profundidad; k++){
				cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
			}
		}
	}
}

int main(){
	int tresArr1[2][3][2] = {
							{							
							{1,2},
							{3,4},
							{5,6},
						},
						{
							{7,8},
							{9,10},
							{11,12}
						}											
	};
	
	int tresArr2[2][3][2] = {{{1,2},{3,4},{5,6}}, {{7,8},{9,10},{11,12}}};
	
	int tresArr3[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout << "Los valores del arreglo 1 son: " << endl;
	imprimirArreglo(tresArr1, 2, 3, 2);
	cout << "Los valores del arreglo 2 son: " << endl;
	imprimirArreglo(tresArr2, 2, 3, 2);
	cout << "Los valores del arreglo 3 son: " << endl;
	imprimirArreglo(tresArr3, 2, 3, 2);
	
	return 0;
}

