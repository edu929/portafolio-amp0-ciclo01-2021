#include <iostream>

using namespace std;

class Circulo {
	double radio;
	public:
		Circulo(double r) : radio(r){}
		double area() { return radio*radio*3.14159265; }
};

class Cilindro{
	Circulo base;
	double altura;
	public:
		Cilindro(double r, double h) : base(r), altura(h){}
		double valumen() { return base.area()*altura;}
};

int main(){
	Cilindro cilindro1 (10,20);
	
	cout << "Volumen del cilindro cilindro1: " << cilindro1.valumen() << endl;
	
	return 0;
}