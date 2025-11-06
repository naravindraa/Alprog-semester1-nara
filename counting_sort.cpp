#include <iostream>
using namespace std;

void countingSort(int data[], int n) {
    int maks = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > maks)
            maks = data[i];
    }

    
    int hitung[maks + 1] = {0};

    
    for (int i = 0; i < n; i++) {
        hitung[data[i]]++;
    }

    
    for (int i = 1; i <= maks; i++) {
        hitung[i] += hitung[i - 1];
    }

    
    int hasil[n];
    for (int i = n - 1; i >= 0; i--) {
        hasil[hitung[data[i]] - 1] = data[i];
        hitung[data[i]]--;
    }

    
    for (int i = 0; i < n; i++) {
        data[i] = hasil[i];
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    cout << "Masukkan angka: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    countingSort(data, n);

    cout << "Sesudah: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}