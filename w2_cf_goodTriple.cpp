#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
    for(int test = 0; test < t; test++){
        int n;
        cin >> n;
        int digit = n % 10;
        n = n/10;
        long long ans = ((digit+1)*(digit+2))/2;
        while(n > 0){
            digit = n % 10;
            ans *= ((digit+1)*(digit+2))/2;
            n = n/10;
        }
        cout << ans << " ";
    }
    cout << endl;
}