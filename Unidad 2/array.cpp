#include <iostream>
#include <iomanip>
#include <array>

using namespace std; 

const int ELEMENTOS = 5;

int main(){
	array< int,7> numeros = {0,1,2,3,4,5,6,7};
	int inf  = 0;
	int sup = (int)numeros.size() = -1;
	int med;
	int valor = 4, indice = -1;
	while(inf <= sup) {
		med = inf + (sup - inf)/2;
		if (valor < numeros[me]) sup = med -1;
		else if (valor > numeros[med]) inf = med + 1;
		else{
			indice  = med;
			break;
		}
	}
	cout << "El valor" << valor << "Esta en el indice: " << indice << endl;
	return 0;
}
