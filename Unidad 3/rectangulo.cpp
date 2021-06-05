#include <iostream>

using namespace std;

class Rectangulo{
	int ancho, alto;
	public: 
	Rectangulo();
	Rectangulo(int, int);
	int area(){ return ancho * alto;}
	
};

Rectangulo::Rectangulo(int x, int y){
	ancho = x;
	alto = y;
}

Rectangulo::Rectangulo(){
	ancho = 5;
	alto = 2;
	
}
class Circulo{
double radio;
public:
	Circulo(double r) { radio = r; }
	double cincunferencia() { return 2*radio*3.14159265; }
};

int main(){
	Rectangulo rectangulo1(3,4);
	Rectangulo rectangulo2(5,6);
	Rectangulo rectangulo3(7,3);
	Rectangulo rectangulo4;
	
	cout << "Area rectangulo 1: " << rectangulo1.area() << endl;
	cout << "Area rectangulo 2: " << rectangulo2.area() << endl;
	cout << "Area rectangulo 3: " << rectangulo3.area() << endl;
	cout << "Area rectangulo 4: " << rectangulo4.area() << endl;
	
	Circulo foo (10.0);//inicializacion funcional del objeto
	Circulo bar = 20.0;//inicialiazcion por asignacion
	Circulo baz {30.0};//inicializacion por uniforme
	Circulo lux = {40.0};
	
	cout << "Circunferencia de foo: " << foo.cincunferencia() << endl;
	cout << "Circunferencia de bar: " << bar.cincunferencia() << endl;
	cout << "Circunferencia de baz: " << baz.cincunferencia() << endl;
	cout << "Circunferencia de lux: " << lux.cincunferencia() << endl;
	
	Rectangulo *rectanglep1, *rectanglep2, *rectanglep3;
	rectanglep1 = &rectangulo1;
	rectanglep2 = new Rectangulo(5,7);
	rectanglep3 = new Rectangulo[2]{{2,5},{3,6}}; //arrelo de rectangulos
	cout << "Area rectangulo1: " << rectangulo1.area() << endl;
	cout << "Area *rectanglep1: " << rectanglep1->area() << endl;
	cout << "Area *rectanglep2: " << rectanglep2->area() << endl;
	cout << "Area *rectanglep3: " << rectanglep3[0].area() << endl;
	cout << "Area *rectanglep3: " << rectanglep3[1].area() << endl;
	
	delete rectanglep2;
	delete[] rectanglep3;
	return 0;
}