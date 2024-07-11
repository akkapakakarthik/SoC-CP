#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    m = m - n;
    int maxPillows = 1;
    int i = 1;
    while(m > 0){
        if(m == 1){
            maxPillows++;
        }
        else {
            m = m - min(k-1, i) - min(n-k, i) - 1;
            maxPillows++;
            i = i + 2;
        }
    }
    cout << maxPillows << endl;
}