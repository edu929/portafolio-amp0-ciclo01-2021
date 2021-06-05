#ifndef DIGRAFO_H
#define DIGRAFO_H

#include <list>
#include <iterator>
#include <iostream>

using std::list;
using std::cout;
using std::endl;

class Digrafo{
	private:
		int vertices; 						// Numero de vertices en el digrafo
		int aristas;						// Numero de aristas en el digrafo
		list<int> *adyacentes;					// Lista de los vecinos
	public:
		Digrafo();						// Constructor
		Digrafo(const Digrafo &otro);				// Constructor a partir de otro Digrafo
		~Digrafo();						// Destructor
		int getVertices() const;				// Obtener el numero de vertices	
		void setVertices(int vertices);				// Establecer el numero de vertices
		int getAristas() const;					// Obtener el numero de aristas
		list<int> getAdyacentes(int v) const; 			// Obtener lista de adyacentes
		void agregarArista(int v, int w);			// Agregar la arista v - w
		void imprimir();					// Imprimir el grafo		
};

Digrafo::Digrafo() : vertices(0), aristas(0), adyacentes(nullptr) {
	// Constructor vacio
}

Digrafo::Digrafo(const Digrafo &otro){
	vertices = otro.vertices;
	aristas = otro.aristas;
	if(vertices == 0){
		adyacentes = nullptr;
	} else {
		adyacentes = new list<int>[vertices];
		for (int i = 0; i < vertices; i++){
			list<int>::iterator it;
			for (it = otro.adyacentes[i].begin(); it != otro.adyacentes[i].end(); it++){
				this->adyacentes[i].push_back(*it);
			}
		}	
	}
}

Digrafo::~Digrafo(){
	if (adyacentes != nullptr){
		delete[] adyacentes;
	}
}

int Digrafo::getVertices() const{
	return this->vertices;
}

void Digrafo::setVertices(int vertices){
	if(this->vertices == 0){
		this->vertices = vertices;
		adyacentes = new list<int>[vertices];
	}
}

int Digrafo::getAristas() const {
	return this->aristas;
}

void Digrafo::agregarArista(int v, int w){
	adyacentes[v].push_front(w);
	aristas++;
}

list<int> Digrafo::getAdyacentes(int v) const{
	return adyacentes[v];
}

void Digrafo::imprimir(){
	for (int i = 0; i < vertices; i++){
		cout << i << ": ";
		list<int>::iterator it;
		for (it = adyacentes[i].begin(); it != adyacentes[i].end(); it++)
			cout << *it << ' ';
		cout << endl;
	}
}

#endif // !DIGRAFO_H
