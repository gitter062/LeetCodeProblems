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

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> answer (nums.size(), 0);
    int right = nums.size()-1, left = 0;
    int index = answer.size()-1;

    while(left <= right){
        if(abs(nums[right]) > abs(nums[left])){
            answer[index] = nums[right] * nums[right];
            right--;
        }
        else{
            answer[index] = nums[left] * nums[left];
            left++;
        }
        index--;
    }
    return answer;
}

int main(void){
    vector<int> nums = {-4,-1,0,3,10};
    for(int i = 0; i < nums.size(); i++)
        cout << sortedSquares(nums)[i] << endl;
    return 0;
}
