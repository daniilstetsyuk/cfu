#include <iostream>
#include <iomanip>
using namespace std;

int a, b;

int main()
{
cin >> a >> b;
cout << a + b << endl;
cout << a - b << endl;
cout << (long long)a * b << endl;
cout << fixed << setprecision(3) << (double)a / b << endl;
}