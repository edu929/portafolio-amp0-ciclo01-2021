#include <iostream>
using namespace std;

	void operarConC() {
		int factorial = 1;
		int num  = 1;
		while (num <= 7) {
			factorial = factorial * num;
			num++;
		}
		cout << "7! :" << factorial;

	}
	
	


int main(){
	operarConC();
}
