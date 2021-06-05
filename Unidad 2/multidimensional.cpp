#include <iostream>

using namespace std;

int main(){
	
	//arreglo de tipo integer de 3 filas y 2 columnas
	int test[3][2] = {{2,-5},		//fila 0
					  {4,0},		//fila 1 
					  {9,1}};		//fila 2
					  
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
		}				  
	}
	return 0;
}
