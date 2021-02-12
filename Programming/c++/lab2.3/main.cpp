#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int X, Y, Z, i;

int main() {
    cin >> X >> Y >> Z;
    if(X>Y){
        i=X;
        X=Y;
        Y=i;
    }
    if(X>Z){
        i=X;
        X=Z;
        Z=i;
    }
    if(Y>Z){
        i=Y;
        Y=Z;
        Z=i;
    }
     cout << fixed << setprecision (6) << (long double) (pow(Z,2)-pow(X,2))/(pow(Y,2)-pow(X,2)) << endl;
}