#include <iostream>
using namespace std;


void bubbleSortAscending(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {          
        for (int j = 0; j < n - 1 - i; j++) {  
            if (data[j] > data[j + 1]) {       
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
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

    bubbleSortAscending(data, n);

    cout << "Sesudah: ";
    tampil(data, n);

    return 0;
}