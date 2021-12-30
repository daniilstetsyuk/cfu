#include <iostream>
#include <algorithm>

using namespace std;

int N;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr + N);
    int dN = 0, answ = 0;
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] == arr[i + 1])
            dN++;
        else
            dN = 0;
        if (dN > answ)
            answ = dN;
    }
    cout << ++answ;
}