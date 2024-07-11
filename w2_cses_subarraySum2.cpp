#include<bits/stdc++.h>
using namespace std;

int findSubarraySum(vector<int> arr, int n, int sum){
    unordered_map<int, int> previousSum;
    int count = 0;
    int currentSum = 0;

    for (int i = 0; i < n; i++){
        currentSum += arr[i];
        if(currentSum == sum)
            count++;
        if(previousSum.find(currentSum - sum) != previousSum.end())
            count += (previousSum[currentSum - sum]);
        previousSum[currentSum]++;
    }
    return count;
}

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int ans = findSubarraySum(nums, n, x);
    cout << ans << endl;
}