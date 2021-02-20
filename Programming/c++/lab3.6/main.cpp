#include <stdio.h>
#include <iostream>

using namespace std;

int N;
unsigned long long t0=0;
unsigned long long t1=0;
unsigned long long t2=1;
unsigned long long tN;
unsigned long long summ;
int main(){
    cin >> N;
    if(N == 0 && N==1){
        cout << 0;
    }
    if(N == 2){
        cout << 1;
    }else{
    for (int i=0; i < N; i++){
        summ = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = summ;
    }
        cout << t0;
    }

}