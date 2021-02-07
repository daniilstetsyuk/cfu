#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int a,b,c;
double D;

int main()
{
    cin >> a >> b >> c;
    D=pow(b,2) - (4*a*c);
    cout << (int) ((b*(-1))+sqrt(D))/(2*a) << " " << ((b*(-1))-sqrt(D))/(2*a) << endl;
}