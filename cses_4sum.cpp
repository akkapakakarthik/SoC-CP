#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortArr(vector<int> arr, int n){
    vector<pair<int, int> > vp;
    for (int i = 0; i < n; i++){
        vp.push_back(make_pair(arr[i], i));
    }
    sort(vp.begin(), vp.end());
    return vp;
}

vector<vector<int>> fourSum(vector<int> nums, int n, int target){
    vector<vector<int>> ans;
    vector<pair<int,int>> sortedArray = sortArr(nums, n);
    for(int i = 0; i < n; i++){
        if(i > 0 && sortedArray[i].first == sortedArray[i-1].first) continue;
        for(int j = i + 1; j < n; j++){
            if(j != i + 1 && sortedArray[j].first == sortedArray[j-1].first) continue;
            int k = j + 1;
            int l = n -1;
            while(k < l){
                long sum = sortedArray[i].first + sortedArray[j].first;
                sum += sortedArray[k].first;
                sum += sortedArray[l].first;
                if(sum == target){
                    vector<int> temp = {sortedArray[i].second, sortedArray[j].second, sortedArray[k].second, sortedArray[l].second};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && sortedArray[k].first == sortedArray[k-1].first) k++;
                    while (k < l && sortedArray[l].first == sortedArray[l+1].first) l--;
                }
                else if(sum < target) k++;
                else l--;
            }
        }
    }
    return ans;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = fourSum(nums, n, x)[0];
    if(ans.size() != 0){
        for(int i = 0; i < 4; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else cout << "IMPOSSIBLE" << endl;

}