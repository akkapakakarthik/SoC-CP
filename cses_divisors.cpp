#include<iostream>
using namespace std;

int main () {
    int t, a, ans;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a;
        int divisors = 0;
        for (int j = 1; j*j <= a; j++){
            if(a%j == 0) divisors ++;
        }
        if (divisors % 2 == 0) 
        cout << divisors << endl;
    }
}