#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int main() {
    cin >> N;
    int* A = new int[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> M;
    int* B = new int[M];
    for (int i = 0; i < M; i++)
        cin >> B[i];
    int* C = new int[N + M];

    int i=0, j=0, k = 0;
    while (i < N && j < M) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    while (i < N) 
        C[k++] = A[i++];
    while (j < M)
        C[k++] = B[j++];

    
    
    for (int l = 0; l < N + M; l++)
        cout << C[l] << " ";
}