#include <iostream>
#include "rectangulo.h"
#include "circulo.h"

using namespace std;


int main(int argc, char** argv){
	//crear dos objetos de tipo rectangulo
	Rectangulo r1(3,2);
	Rectangulo r2(2.0,4.0);
	
	//Crear dos objetos de tipo circulo
	Circulo c1(6);
	Circulo c2(1.5);
	
	//imprimir el area de los rectangulos
	
	cout << "Area de r1 = " << r1.calcularArea() << endl;
	cout << "Area de r2 = " << r2.calcularArea() << endl;
	
	//imprimir el perimetro 
	cout << "Perimetro de r1 = " << r1.calcularPerimetro() << endl;
	cout << "Perimetro de r2 = " << r2.calcularPerimetro() << endl;
	
	//imprimir valores del circulo 1
	
	cout << "Circulo c1, radio = " << c1.getRadio();
	cout << ", diametro = " << c1.calcularDiametro();
	cout << ", area = " << c1.calcularArea();
	cout << ", perimetro = " << c1.calcularPerimetro() << endl;
	return 0;
	}	