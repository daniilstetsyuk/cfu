#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int a,i;

void chek_num (int num){
    if (num>0){cout <<  pow(num,3) << " ";}
    else if (num<0){cout <<  pow(num,2) << " ";}
    else {cout << 0 << " ";}
}

int main() {
    for (i = 0; i < 3; i++){
        cin >> a;
        chek_num(a);
    }
    
}