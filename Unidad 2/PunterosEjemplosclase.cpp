#include <iostream>

using namespace std;

int paul  = 21;
int maria = 90;
int carlos = 22;
int* melissa = &paul;
int tom = paul;
int* dave = melissa;

void imprimir(){
    cout << "paul = " << paul << endl;
    cout << "&paul = " << &paul << endl;
    //cout << "&maria = " << &maria << endl;
    //cout << "&carlos = " << &carlos << endl;
    cout << "melissa = " << melissa << endl;
    cout << "&melissa = " << &melissa << endl;
    //cout << "*melissa = " << *melissa << endl;
    //cout << "&tom = " << &tom << endl;
    //cout << "tom = " << tom << endl;
    cout << "dave = " << dave << endl;
    cout << "&dave = " << &dave << endl;
    cout << "*dave = " << *dave << endl;
    cout << "                          " << endl;
}

int main(){
    imprimir();
    *melissa = 30;
    imprimir();
    return 0;
}
