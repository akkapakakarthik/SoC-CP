#include<iostream>
#include<vector>
using namespace std;

int main() {
    const int N = 100000000;
    vector<int> a;
    vector<bool> prime(N, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i*i < N; i++){             //sieve method
        if(prime[i] == true){                    //removing all multiples of prime
            for (int j = i*i; j < N; j += i){
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (prime[i]) {
            a.push_back(i);
        }
    }
    for (int i = 0; i < a.size(); i += 100){
        cout << a[i] << endl;
    }
}   