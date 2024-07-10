#include<iostream>
using namespace std;

int pow(int a , int b) {
    long int ans = 1;
    for (int i = 0; i < b; i++){
        ans = ans*a % (1000000007);
    }
    return ans;
}

int main (){
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << pow(a,b) % (pow(10,9) + 7) << endl;
    }
}