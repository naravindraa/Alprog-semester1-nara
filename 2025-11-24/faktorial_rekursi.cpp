#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;              
    return n * faktorial(n - 1); 
}

int main() {
    int n;
    cin >> n;

    cout << faktorial(n);
}
