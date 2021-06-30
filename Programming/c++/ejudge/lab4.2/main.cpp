#include <iostream>

using namespace std;

int N,i;

int main() {
    cin >> N;
    int* arr = new int[N];
    for (int i=0; i<N; i++)
        cin >> arr[i];
    for(int i=0; i<N; i+=2)
        cout << arr[i] << " ";
    cout << endl;
    for(int i=1; i<N; i+=2)
        cout << arr[i] << " ";
}