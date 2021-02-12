#include <iostream>
#include <math.h>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    if(X==0 && Y==0){
        cout << 1;
    }else if (X!=0 && Y!=0){
         cout << 0;
    }else if(X==0 && Y!=0){
        cout << 3;
    }else{
        cout << 2;
    }
}