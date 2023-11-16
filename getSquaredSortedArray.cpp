#include <bits/stdc++.h>
using namespace std;

vector<int> squaredSortedArray(vector<int>& nums) {
    int left = 0, right = nums.size()-1, index = nums.size()-1;
    vector<int> answer(nums.size());
    while(left<=right){
        if(abs(nums[left]) < abs(nums[right])){
            answer[index] = nums[right]*nums[right];
            index--;
            right--;
        }
        else{
            answer[index] = nums[left]*nums[left];
            index--;
            left++;
        }
    }
    return answer;
}
int main(){
    vector<int> sortedArray {-7,-3,2,3,11};
    vector<int> result = squaredSortedArray(sortedArray);
    for (int value:result)
        cout<<value << " ";
    return 0;
}