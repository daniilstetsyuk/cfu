#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long long a,b,c;

int main() {
    cin >> a >> b >> c;
    
    if(a<=b){
        if(a<=c){
            cout << a;
        }
    }
    if(b<a){
        if(b<=c){
            cout << b;
        }
    }
    if(c<a){
        if(c<b){
            cout << c;
        }
    }
}