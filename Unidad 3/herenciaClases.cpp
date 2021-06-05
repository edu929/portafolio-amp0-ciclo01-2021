#include <iostream>

using namespace std;
class Poligono {
	protected:
		double ancho, alto;
		public:
			void setValores(double a, double b )
			{ ancho = a; alto = b; }
};

class Rectangulo: public Poligono {
	public:
		double area(){ return ancho * alto; }
};

class Triangulo: public Poligono {
	public:
		double area(){ return (ancho * alto) / 2; }
		
};

int main(){
	Rectangulo miRectangulo;
	Triangulo miTriangulo;
	miRectangulo.setValores(3.5,8.2);		//metodo heredado del poligono
	miTriangulo.setValores(3.5,8.2);
	cout << miRectangulo.area() << endl;
	cout << miTriangulo.area() << endl;
	return 0;
}