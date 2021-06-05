#ifndef CIRCULO
#define CIRCULO

#include<cmath>

const double PI = 3.14159265;

// especificacion de la clase

class Circulo{
	private:
		double radio;
		public:
			Circulo(double r);
			double getRadio();
			double calcularArea();
			double calcularDiametro();
			double calcularPerimetro();
};

//implementacion del constructor
Circulo::Circulo(double r){
	this->radio = r;
}

//implementacion de los metodos
double Circulo::getRadio(){
	return this->radio;
}

double Circulo::calcularDiametro(){
	return 2 * PI * this->radio;
}