#include <iostream>
#include <math.h>

using namespace std;

int N, first=0, second=1;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int a = 0; a < N; a++){
        cin >> arr[a];
    }
    int min = abs(arr[0] - arr[1]);
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (abs(arr[i] - arr[j]) < min){
                min = abs(arr[i] - arr[j]);
                first = i; second = j;
            }
    cout << first << " " << second << endl;
}