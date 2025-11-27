#include <iostream>
using namespace std;

int hitungA(string s, int index){
    if (index == s.length())
    return 0;

    int tambah = (s[index] == 'a' || s[index] == 'A') ? 1 : 0;
    return tambah + hitungA (s, index +1);

}

int main (){
    string kata;
    cout << "Masukkan sebuah kata: " ;
    cin >> kata;

int jumlahA = hitungA(kata, 0);

cout << "\n Huruf 'a' muncul sebanyak: " << jumlahA << " kali" <<endl;

return 0;
}
