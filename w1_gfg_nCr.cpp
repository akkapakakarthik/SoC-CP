#include<iostream>
using namespace std;

long long nCr(long long n, long long r) {
    // Base cases
    if(r == 0 || r == n) return 1;
    if(r > n) return 0;
    else return (n*nCr(n-1, r-1)/r)%1000003;
}

int main() {
    long long n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
}