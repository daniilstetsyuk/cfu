#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double a, b;

int main()
{
cin >> a >> b;
cout << fixed << setprecision(3) << (pow(a,2) + pow(b,2))/2 << endl;
cout << fixed << setprecision(3) << (abs(a)+abs(b))/2 << endl;
}