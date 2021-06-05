#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "cola.hpp"

using namespace std;

int numeroAleatorio(int max);
void papaCaliente(const vector<string> &listaNombres);

int main(){
	vector<string> jugadores = {"Erick","Emmanuel", "Briam","Gabriel","Oscar","Krista","Eduardo","Alejandra"
	"Carlos","Diego", "Manuel", "Jose", "Mateo","Fernando", "Martinez", "Ernesto", "Gustavo", "Graham"};
	papaCaliente(jugadores);
	return 0;
	
}

int numeroAleatorio(int max){
	static bool semillaCreada = false;
	if(!semillaCreada){
		srand(time(0));
		semillaCreada = true;
	}
	return rand( )% max;
}

void papaCaliente(const vector<string> &listaNombres){
	int cantidadJugadores = listaNombres.size();
	Cola<string> simulacion;
	for(int i = 0; i< cantidadJugadores; i++){
		simulacion.enqueue(listaNombres[i]);
	}
	
	for(int i = cantidadJugadores; i > 1; i--){
		cout << "Quien tiene la papa caliente?" << endl;
		for(int pases = numeroAleatorio(2*cantidadJugadores); pases > 0; pases--){
			string jugador = simulacion.dequeue();
			cout << jugador << endl;
			simulacion.enqueue(jugador);
		}
		string funado = simulacion.dequeue();
		cout << funado << endl;
		cout << "Alto!!! " << funado << " sale del juego... " << endl << endl;
	}
	string ganador = simulacion.dequeue();
	cout << ganador << "gano el juego." << endl;
}