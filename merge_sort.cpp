#include <iostream>
using namespace std;


void gabung(int data[], int kiri, int tengah, int kanan) {
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    int kiriArr[n1], kananArr[n2];

    
    for (int i = 0; i < n1; i++)
        kiriArr[i] = data[kiri + i];
    for (int j = 0; j < n2; j++)
        kananArr[j] = data[tengah + 1 + j];

   
    int i = 0, j = 0, k = kiri;
    while (i < n1 && j < n2) {
        if (kiriArr[i] <= kananArr[j]) {
            data[k] = kiriArr[i];
            i++;
        } else {
            data[k] = kananArr[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        data[k] = kiriArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        data[k] = kananArr[j];
        j++;
        k++;
    }
}


void mergeSort(int data[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = (kiri + kanan) / 2;

        mergeSort(data, kiri, tengah);       
        mergeSort(data, tengah + 1, kanan);  

        gabung(data, kiri, tengah, kanan);   
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

    mergeSort(data, 0, n - 1);

    cout << "Setelah: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}
