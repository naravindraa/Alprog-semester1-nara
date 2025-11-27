#include <iostream>
#include <string>
using namespace std;

float hitungRata (int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n ; i++)
    total += arr[i];
    return(float) total / n;
}

int main(){
    string nama;
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);


int n;
cout << "Masukkan jumlah nilai: ";
cin >> n;

int nilai[n];
cout << "Masukkan nilainya: ";
for (int i = 0; i < n; i++)
cin >> nilai[i];

float rata = hitungRata(nilai, n);

cout << "\n Nama: " << nama << endl;
cout << "Rata-rata: " <<rata <<endl;

if (rata >= 80){
    cout << "Kategori: Baik" << endl;
}
else if (rata >= 60){
    cout << "Kategori: Cukup" <<endl;
}
else {
    cout << "Kategori: Kurang" <<endl;
}



return 0;
}
