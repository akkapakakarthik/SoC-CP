#include<bits/stdc++.h>
using namespace std;
 
int cost(int l,int r, vector<int> avenger, int a, int b){
    int i = lower_bound(avenger.begin(),avenger.end(),l) - avenger.begin();
    int j = upper_bound(avenger.begin(),avenger.end(),r) - avenger.begin();
    int count = j-i;
    if(!count) return a;
    int currCost = b * count * (r - l + 1);
    if(l!=r){
        int left = cost(l,(l+r)/2, avenger, a, b);
        int right = cost((l+r)/2+1,r, avenger, a, b);
        currCost = min(currCost , left + right);
    }
    return currCost;
}
 
int main(){
    int n,k,a,b,in;
    vector<int> avenger;
    cin >> n >> k >> a >> b;
    for(int i=0;i<k;i++){
        int temp;
        cin >> temp;
        avenger.push_back(temp);
    }
    sort(avenger.begin(),avenger.end());
    cout << cost(1, 1<<n, avenger, a, b);
}