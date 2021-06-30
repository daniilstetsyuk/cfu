#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << arr[N-1] << " ";
    for (int i = 0; i < N-1; i++)
        cout << arr[i] << " ";
}