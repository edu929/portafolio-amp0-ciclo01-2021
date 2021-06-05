#ifndef  RECTANGULO
#include RECTANGULO

class Rectangulo {
	private:
		double base;
		double altura;
		public:
			Rectangulo(double b, double h);
			double calcularArea();
			double calcularPerimetro();
			double getBase();
			double getAltura();
			
};

//implementacion de metodos
Rectangulo::Rectangulo(double b, double h){
	this->base = b;
	this->altura = h;
}

//calcular el area de un rectangulo
double Rectangulo::calcularArea(){
	return this->base * this->altura;
}

double Rectangulo::calcularArea(){
	return this->base * this->altura;
}

double Rectangulo::calcularPerimetro(){
	return 2 * (this->base * altura);
}

double Rectangulo::getBase(){
	return this->base;
}

double Rectangulo::getAltura(){
	return this->altura;
}

#endif