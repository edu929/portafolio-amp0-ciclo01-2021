#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
	string nombres[5] = {"Jose", "Erick", "Krista","Manuel","Diego"};
	
	array<string, 5> nombre2 = {"Briam","Gustavo","Graham","Emmanuel","Alejandra"};
	
	
	int tamanio = sizeof(nombres)/sizeof(nombres[0]);
	int tamanio2 = nombres2.size();
	
	
	for(int i = 0; i < tamanio; i++){
		cout << nombres[i] << endl;
	}
	
	for(int i = 0; i < tamanio2; i++){
		cout << nombre2[i] << endl;
	}
	return 0;
}
