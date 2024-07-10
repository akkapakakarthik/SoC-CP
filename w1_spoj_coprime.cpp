#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main () {
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a;
        int count = 0;
        for (int j = 1; j <= a; j++) {
            if (a*j == lcm (a, j)) count ++;
        }
        cout << count << endl;
    }

}