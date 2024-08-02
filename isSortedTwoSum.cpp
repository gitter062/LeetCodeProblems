/*
Example 2: Given a sorted array of unique integers and a target integer,
return true if there exists a pair of numbers that sum to target, false otherwise. 
This problem is similar to Two Sum. (In Two Sum, the input is not sorted).

For example, given nums = [1, 2, 4, 6, 8, 9, 14, 15] and target = 13, return true because 4 + 9 = 13.
*/
// use two pointer technique

#include <bits/stdc++.h>

using namespace std;

bool isSortedTwoSum(vector<int>& arr, int target){
    int left = 0, right = arr.size()-1;
    while(left<right){
        if(arr[left] + arr[right] == target){
            return true;
        }
        else if(arr[left] + arr[right] > target){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

int main(void){
    vector<int> arr {1, 2, 4, 6, 8, 9, 14, 15};
    int target  = 13;
    if (isSortedTwoSum(arr, target)){
        cout << "Is Two Sum";
    }
    else
        cout << "Not a two sum";

    return 0;
}