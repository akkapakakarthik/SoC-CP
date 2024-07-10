#include<iostream>
#include<vector>
using namespace std;

int binarySearchFirstOccurance(vector<int> nums, int target, int first, int last){
    // cout << "inside binarySearchLastOccurance " << first << " " << last << endl;
    int mid = (first + last)/2;
    if(first + 1 == last){
        if (nums[first + 1] == target) return first + 1;
        else return -1;
    }
    else if(first == last) return -1;
    else{
        if(nums[mid] < target){
            return binarySearchFirstOccurance(nums, target, mid, last);
        }
        else return binarySearchFirstOccurance(nums, target, first, mid);
    }
}

int binarySearchLastOccurance(vector<int> nums, int target, int first, int last){
    // cout << "inside binarySearchLastOccurance " << first << " " << last << endl;
    int mid = (first + last)/2;
    if(first + 1 == last){
        if (nums[first] == target) return first;
        else return -1;
    }
    else{
        if(nums[mid] <= target){
            return binarySearchLastOccurance(nums, target, mid, last);
        }
        else return binarySearchLastOccurance(nums, target, first, mid);
    }
}

int main (){
    int size;
    cin >> size;
    vector<int> nums;
    int target;
    for (int i = 0; i < size; i++){
        int value;
        cin >> value;
        nums.push_back(value);
    }
    cin >> target;
    int firstOccurance = binarySearchFirstOccurance(nums, target, 0, size);
    int lastOccurance  = binarySearchLastOccurance(nums, target, 0, size);
    // cout << firstOccurance << " " << lastOccurance << endl; 
    if (firstOccurance != -1){
        for(int i = firstOccurance ; i <= lastOccurance; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    else cout << -1 << " " << -1 << endl;
}