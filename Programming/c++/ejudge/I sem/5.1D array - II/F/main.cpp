#include <iostream>
#include <algorithm>

using namespace std;

int N, K;

int main() {
    cin >> N;
    cin >> K;
    int* A = new int[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N-1; j++) {
            if (A[j] > A[j+1])
                swap(A[j], A[j+1]);
        }
    }

    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
}