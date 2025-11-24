#include <iostream>
using namespace std;

void bucketSort(int arr[], int N) {
    int bucket[100] = {0};  

    
    for (int i = 0; i < N; i++) {
        bucket[arr[i]]++;
    }

   
    int k = 0;
    for (int i = 0; i < 100; i++) {
        while (bucket[i] > 0) {
            arr[k++] = i;
            bucket[i]--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bucketSort(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}