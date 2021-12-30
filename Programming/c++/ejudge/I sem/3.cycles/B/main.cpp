#include <iostream>

using namespace std;
 
int T;
long long A,B;
int main() {
    cin >> T;
    for (int i=0; i<T;i++){
        cin >> A >> B;
        while(A!=0 && B!=0){
            if(A>B){
                A %= B;
            }else{
                B %= A;
            }
        }
        cout << A+B << endl;
    }
} 