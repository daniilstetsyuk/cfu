#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int R1, R2;

int main()
{
    cin >> R1 >> R2;
    cout << fixed << setprecision (6) << fabs((double) M_PI*(pow(R2,2)-pow(R1,2))) << endl;
}