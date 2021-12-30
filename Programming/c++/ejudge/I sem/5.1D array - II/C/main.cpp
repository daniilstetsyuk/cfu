#include <iostream>
#include <algorithm>

using namespace std;

int N, dN = 1, answ = 1;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 0; i < N; i++) {
        if (arr[i] == arr[i+1]){
            dN++;
        }
        else {
            dN = 1;
        }
        if (answ <= dN)
            answ = dN;
    }
    cout << answ;
}