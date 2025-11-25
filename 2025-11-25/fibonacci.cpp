#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;
    int index = 1; 

    if (n == 0) {
        cout << 1; 
        return 0;
    } else if (n == 1) {
        cout << 2; 
        return 0;
    }

    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
        index++;
        if (b < 0) break;
    }

    if (b == n)
        cout << index + 1;
    else
        cout << 0;

    return 0;
}
