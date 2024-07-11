#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> count(31, 0);
    while(t--){
        long long m,v;
        cin >> m >> v;
        if(m == 1) count[v]++;
        else { 
            if(v == 0) cout << "YES" << endl;
            else{
                vector<int> cnt(31, 0);
                for(int i=0; i<31; i++) cnt[i] = count[i];
                int flag = 0;
                int remainder;
                int index;
                int start= 0 ;
                while(start < 30 && cnt[start] == 0) start++;
                long long prod = pow(2, start);
                if(v % prod != 0) cout << "NO" << endl;
                else{ 
                    prod *= 2;
                    for(int i=start+1; i<30; i++){ 
                        if(v %prod == 0) cnt[i] += cnt[i-1]/2;
                        else if(v < prod) {
                            index = i-1;
                            flag = 2;
                            break;
                        }
                        else { 
                            if(cnt[i-1] >= (v %prod)/(prod/2)){
                                cnt[i-1] -= (v %prod)/(prod/2);
                                v -= (v %prod);
                                cnt[i] += cnt[i-1]/2;
                            }
                            else{
                                flag = 1;
                                break;
                            }
                        }
                        prod *= 2;
                    }
                    if(flag == 1) cout << "NO" << endl;
                    else if(flag == 2){ 
                        prod = pow(2, index);
                        // cout << prod << " " << v << endl;
                        if(v %prod == 0){
                            if(cnt[index] >= v/prod) cout << "YES" << endl;
                            else cout << "NO" << endl;
                        }
                    }
                    else{ 
                        prod = pow(2, 29);
                        if(v %prod == 0){
                            if(cnt[29] >= v/prod) cout << "YES" << endl;
                            else cout << "NO" << endl;
                        }
                    }
                }
            }
        }
    }
}