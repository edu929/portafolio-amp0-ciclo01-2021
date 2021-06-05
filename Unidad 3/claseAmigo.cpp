#include <iostream>
using namespace std;

class Cuadrado;

class Rectangulo{
		double ancho, alto;
	public: 
		double area(){ return (ancho * alto);}  //calcular el area de un rectangulo
		void convertir (Cuadrado a);
};

class Cuadrado{
	friend class Rectangulo;
	private:
		double lado;
		public:
			Cuadrado(double a) : lado(a){}
};

void Rectangulo::convertir(Cuadrado a){
	ancho = a.lado;
	alto = a.lado;
}

int main(){
	Rectangulo r1; //creamos un rectangulo vacio
	Cuadrado c1(4);	//creamos un cuadrado con cada lado midiendo 4 unidades
	r1.convertir(c1);// convertimos el cuadradp en un rectangulo
	cout << r1.area();//ahora podemos utilizar los metodos de la clase rectangulo
	return 0;
}