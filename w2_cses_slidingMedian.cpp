#include<bits/stdc++.h>
using namespace std;

void slidingMedian(vector<int> nums, int n, int k){
    for(int i = 0; i < n - k + 1; i++){
        vector<int> copy = nums;
        nth_element(copy.begin() + i, copy.begin() + i + (k-1)/2, copy.begin() + i + k);
        if (k % 2 == 0){
            cout << copy[i + (k-1)/2] << " ";
        }
        else cout << copy[i + k/2] << " ";
    }
    cout << endl;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    slidingMedian(nums, n, k);
}