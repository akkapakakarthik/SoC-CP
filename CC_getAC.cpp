#include <iostream>
#include <assert.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, a, b, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (gcd(a,b) == 1) cout << a * b - a - b + 1 << "\n"; // Frobenius number
        else cout << -1 << endl;
    }
}