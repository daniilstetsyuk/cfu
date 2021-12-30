#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long X1,Y1,X2,Y2,X3,Y3, A, B;

int main()
{
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
    A=((X1-X3)*(Y2-Y3));
    B=((X2-X3)*(Y1-Y3));
    cout << fixed << setprecision (6) << (long double) fabs((A-B))/2 << endl;
}