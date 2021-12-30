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
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j])
                swap(A[i], A[j]);
        }
    }

    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
}