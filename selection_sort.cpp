#include <iostream>
using namespace std;


void selection(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maks = i; 

        
        for (int j = i + 1; j < n; j++) {
            if (data[j] > data[maks]) {
                maks = j;
            }
        }

        
        int temp = data[i];
        data[i] = data[maks];
        data[maks] = temp;
    }
}


void tampil(int data[], int n) {
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];
    cout << "Masukkan angka: ";
    for (int i = 0; i < n; i++)
        cin >> data[i];

    cout << "\nSebelum: ";
    tampil(data, n);

    selection(data, n);

    cout << "Setelah: ";
    tampil(data, n);

    return 0;
}
