#include <iostream>
#include <math.h>

using namespace std;

int N;
long long A, M, summ = 1, P = 1;

int main() {
    cin >> A >> N >> M;
    
    for(int i=1; i <= N; ++i){
        P = (P * A) % M;
        summ = (summ + P) % M;
    }
    cout << summ;
} 