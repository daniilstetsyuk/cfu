#include <iostream>
#include <math.h>

using namespace std;

int N;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int i=1; i<=N; i++)
        cin >> arr[i];
    for (int i = N; i >= 1; i--)
        cout << arr[i] << " ";
   
}