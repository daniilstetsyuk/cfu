#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int N;
long double N1,N2,N3,N4;

int main()
{
    cin >> N;
    N1 = N/1000;
    N2 = (N%1000)/100;
    N3 = (N%100)/10;
    N4 = (N%10);
    cout << (long double) N1+N2+N3+N4 << endl;
}