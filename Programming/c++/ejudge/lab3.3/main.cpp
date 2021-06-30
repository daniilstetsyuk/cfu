#include <iostream>

using namespace std;

int N;
long long M, K; 
long long candidate, summ;
int main() {
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++){
        cin >> candidate;
        if(candidate%M==K){
            cout << candidate << " " << endl;
            summ += candidate;
        }      
}
    if (summ==0){
        cout << 0;
    }else{
        cout << summ;
    }
} 