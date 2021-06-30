#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int A, B, C;
long double x1, x2, D;

int main() {
    cin >> A >> B >> C;
    D = pow(B,2)-(4*A*C);
    if(D==0){
       cout << fixed << setprecision (6) << ((0-B))/(2*A) << endl;
    }else if(D<0){
        cout << "No roots";
    }else if (D>0){
        x1 = ((0-B)+sqrt(D))/(2*A);
        x2 = ((0-B)-sqrt(D))/(2*A);
        if(x1<x2){
            cout << fixed << setprecision (6) << x1 << " " << x2;
        }else{
            cout << fixed << setprecision (6) << x2 << " " << x1;
        }
    }
}