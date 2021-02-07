#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int a,b;

int main()
{
    cin >> a >> b;
    cout << fixed << setprecision (6) << (long double) sqrt((pow(a,2)+pow(b,2))) << endl;
}