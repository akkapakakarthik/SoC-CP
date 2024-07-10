#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int pow(long a , long b) {
    long int ans = 1;
    for (int i = 0; i < b; i++){
        ans = ans*a % (1000000007);
    }
    return ans;
    }

    long long powerMod(string a, long b, long m) {
        int ans;
        long a_num = stoi(a);
        ans = pow(a_num, b) % m;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        long long b,m;
        cin>>a>>b>>m;
        Solution ob;
        cout << ob.powerMod(a,b,m) << endl;
    }
    return 0;
}