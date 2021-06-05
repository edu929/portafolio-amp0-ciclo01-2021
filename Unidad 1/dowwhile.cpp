#include <iostream>
using namespace std;

	void dowwhile() {
		int i = 0;
		do {
			cout << i << endl;

		}
		while(i < 5);

	}
	void ingresarnum() {
		int num = 0;
		do {
			cout << "ingresar un numero entre 0 y 15: ";
			cin >> num;
		} while ((num > 10) || (num < 0));
	}
	
		int main(){
			ingresarnum();
		}
