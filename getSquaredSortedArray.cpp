/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size()-1, i = nums.size()-1;
        vector<int> ans(nums.size(), 0);
        
        while(left <= right){
            if(abs(nums[left]) < abs(nums[right])){
                ans[i] = nums[right] * nums[right];
                right--;
            }
            else{
                ans[i] = nums[left] * nums[left];
                left++;
            }
            i--;
        }
        return ans;
    }
};