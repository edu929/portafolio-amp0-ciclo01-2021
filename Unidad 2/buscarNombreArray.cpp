#include <iostream>
#include <string>
#include <array>
using namespace std;

bool busquedaSecuencial(array<string, 6> nombre, string valorBuscado){
	bool encontrado = false;
	for(int i = 0; i <nombre.size(); i++) {
		if (valorBuscado == nombre[i]){
		
		encontrado = true;
		break;
	}
}
return encontrado;
}

int main(){
	array<string,6> nombre = {"Briam","Gustavo","Graham", "Emmanuel", "Alejandra", "Krista"};
	array<string, 3> valorAbuscar = {"Erick", "Krista","Gustavo"};
	for (int i; i < valorAbuscar.size(); i++){
		if(busquedaSecuencial(nombre, valorAbuscar[i])){
			cout << valorAbuscar[i] << " esta en el arreglo " << endl;
		}else{
			cout << valorAbuscar[i] << " no no esta en el arreglo " << endl;
		}
	}
	return 0;
}

