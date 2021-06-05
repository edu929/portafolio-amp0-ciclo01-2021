#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;

    bool var1 = true;
    bool var2 = false;

    cout << var1 << endl;
    cout << var2 << endl;
    // 0= False y 1 = true

    cout << ( x < y)  << endl; //menor que
    cout << ( x > y)  << endl; //mayor que
    cout << ( x <= y) << endl; //menor o igual que
    cout << ( x >= y) << endl; //mayor o igual que
    cout << ( x != y) << endl;  //diferente que
    cout << ( x == y) << endl;  //igual que
    return 0;
}


