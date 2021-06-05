#include <iostream>
#include <iomanip>
using namespace std;
const int ESTUDIANTES = 3;
const int EVALUACIONES = 4;

//prototipos de las funciones a usar
double minima(double[][EVALUACIONES], int, int);
double maxima(double[][EVALUACIONES], int, int);
double promedio(double[], int);
void imprimirArreglo(double[][EVALUACIONES], int , int);

int main(int argc, const char * argv[]){
	double notaEstudiantes[ESTUDIANTES][EVALUACIONES] = 
	{{7.7, 6.8, 8.6, 7.3},
	{9.6, 8.7, 8.9, 7.8},
	{7.0, 9.0, 8.6, 8.1}};
	
	cout << "El arreglo es: " << endl;
	imprimirArreglo(notaEstudiantes, ESTUDIANTES , EVALUACIONES);
	
	cout << setprecision(1);
	cout << "\n\nNota maxima: " << maxima(notaEstudiantes, ESTUDIANTES, EVALUACIONES);
	cout << "\n\nNota minima: " << minima(notaEstudiantes, ESTUDIANTES, EVALUACIONES);
	
	for (int i = 0; i < ESTUDIANTES; i++){
		cout << "\nPromedio estudiante [" << i << "]: ";
		cout << promedio(notaEstudiantes[i], EVALUACIONES); 
	}
	
	cout << endl;
	
	return 0;
}

double minima(double notas[][EVALUACIONES], int alumnos, int examenes){
	double notaMinima = 10.0;
	
	for(int i = 0; i < alumnos; i++)
	for(int j = 0; j < examenes; j++)
	if(notas[i][j] < notaMinima)
	notaMinima = notas[i][j];
	
	return notaMinima;
}

double maxima(double notas[][EVALUACIONES], int alumnos, int examenes){
	double notaMaxima = 0.0;
	
	for(int i =0; i < alumnos; i++)
		for(int j = 0; j < examenes; j++)
			notaMaxima = notas[i][j];
			
			return notaMaxima;
			
}

double promedio(double conjuntoDeNotas[], int examenes){
	double total = 0.0;
	
	for(int i = 0; i < examenes; i++)
		total += conjuntoDeNotas[i];
	
	return total / examenes;
}

void imprimirArreglo(double notas[][EVALUACIONES], int alumnos, int examenes){
	cout << "                      [0]  [1]  [2]  [3]";
	for(int i = 0; i < alumnos; i++){
		cout << "\nnotasEstudiantes[" << i << "] ";
		for(int j = 0; j < examenes; j++)
		cout << setw(5) << fixed << setprecision(1) << notas[i][j];
	}
}
