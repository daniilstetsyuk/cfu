#include <iostream>
#include <math.h>

using namespace std;

long long X, Y, Z, i;

int main() {
    cin >> X >> Y >> Z;
    if(X > Y && Y > Z){
        cout << 2*X << " " << 2*Y << " " << 2*Z;
    }else{
     cout << 0-X << " " << 0-Y << " " << 0-Z;
    }
}