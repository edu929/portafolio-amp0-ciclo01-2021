#include <iostream>
#include <iomanip>

float promedio(const float arr[], const int n){
    float suma = 0.0;
    for(int i = 0; i < n; i++)
        suma += arr[i];
    return suma / n;
}

int main(int argc, const char * argv[]){
    using namespace std;

    //promedio de 5 numeros
    const int n = 5;
    float numeros[n];

    for(int i = 0; i < n; i++){
        cout << "Numeros " << (i + 1) << " : ";
        cin >> numeros[i];
    }

    cout << " El promedio es " << fixed << setprecision(1);
    cout  << promedio(numeros, n) << endl;

    return 0;
}
