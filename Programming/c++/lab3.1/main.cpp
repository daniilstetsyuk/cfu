#include <iostream>

using namespace std;

long long N, m; 
int summ=0;
int main() {
    cin >> N;
    m=N;
    for (N; N > 0; N /= 10){
        summ += (N%10);      
}
    if(m%summ){
        cout << "NO";
    }else{
        cout << "YES";
    }
} 