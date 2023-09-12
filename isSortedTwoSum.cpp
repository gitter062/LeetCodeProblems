/*
Example 2: Given a sorted array of unique integers and a target integer, return true if there exists a pair of numbers that sum to target, false otherwise. This problem is similar to Two Sum. (In Two Sum, the input is not sorted).

For example, given nums = [1, 2, 4, 6, 8, 9, 14, 15] and target = 13, return true because 4 + 9 = 13.
*/

// Use Two Pointer Technique

#include <bits/stdc++.h>

using namespace std;

bool isSortedTwoSum(vector<int>& nums, int target){
    int left = 0, right = nums.size()-1;

    while(left<right){
        if(nums[left] + nums[right] == target){
            return true;
        }
        else if(nums[left] + nums[right] < target)
            left++;
        else
            right--;
    }

    return false;
}

int main()
{
    vector <int> nums{10, 12, 18, 30};
    for(int inputArray:nums)
        cout << inputArray<<" ";

    int target = 30;
    if(isSortedTwoSum(nums, target))
        cout << "Two Sum Exists :)";
    else
        cout << "Two Sum does not Exist :(";

    return 0;
}

