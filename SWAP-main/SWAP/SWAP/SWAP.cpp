#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    int a, b, temp = 0;
    cout << "A= "; cin >> a;
    cout << "B= "; cin >> b;
    cout << "A= " << a << ", B= " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "A= " << a << ", B= " << b;
}