#ifndef CALCULADORA_CALCULADORA_H
#define CALCULADORA_CALCULADORA_H

#include <iostream>
#include <string>

using namespace std;

const double pi = 3.141592653589793238462643383;
double sumar(double x, double y) {
	return x + y;
}

double restar(double x, double y) {
	return x - y;
}

double multiplicar(double x, double y) {
	return x * y;
}
double dividir(double x, double y) {
	return x / y;
}

double solicitarNumero(string queNumero) {
	double numero;
	cout << queNumero << ": ";
	while (!(cin >> numero)) {
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return numero;

}

char solicitarOperador() {
	char operador;
	cout << "Seleccione la operacion ( + | - | * | / ) : ";
	while(!(cin >> operador)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Operador no valido. Intente de nuevo: ";
	}
	return operador;
}

void calculadora() {//
	double numero1, numero2, resultado;
	char operador;


cout << "\nCalculadora de operaciones con dos numeros. " << endl;
cout << "Por favor ingresa dos numeros." << endl;

numero1 = solicitarNumero("Primer numero");
numero2 = solicitarNumero("Segundo numero");
operador = solicitarOperador();

switch (operador){
case '+':
	resultado = sumar(numero1, numero2);
	break;
case'-':
	resultado = restar(numero1, numero2);
	break;
case '*':
	resultado = multiplicar(numero1, numero2);
	break;
case '/':
	resultado = dividir(numero1, numero2);
	break;

default:
	cout << "Operador no soportado. ";
	resultado = -1.0;
	break;
}
cout << "El resultado es = " << resultado << endl;

}

double valorPi() {
	return pi;
}

#endif // !CALCULADORA_CALCULADORA_H


