#include <iostream>
using namespace std;

char konversiNilai(int n) {
    if (n >= 85) return 'A';
    else if (n >= 70) return 'B';
    else if (n >= 55) return 'C';
    else if (n >= 40) return 'D';
    else return 'E';
}

int main() {
    int nilai;
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    char huruf = konversiNilai(nilai);

    cout << "Nilai huruf: " << huruf << endl;

    return 0;
}
