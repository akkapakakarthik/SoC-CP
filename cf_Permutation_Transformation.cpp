#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> a, int left, int right){
    int max = a[left];
    int position = left;
    for (int i = left; i < right; i++){
        if(a[i] > max) {
           max = a[i];
            position = i;
        }
    }
    return position;
}

void computeDepth(vector<int> array, int depth, int left, int right, vector<int>* ans){
    if(left < right){    
        int maxPosition = findMax(array, left, right);
        (*ans)[maxPosition] = depth;
        computeDepth(array,depth + 1, left, maxPosition, ans);
        computeDepth(array, depth + 1, maxPosition + 1, right, ans);
    }    
}


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> input;
        for (int i = 0; i < n; i++){
            int value;
            cin >> value;
            input.push_back(value);
        }
        vector<int> ans;
        ans.resize(n);
        computeDepth(input, 0, 0, n, &ans);
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
    }
}