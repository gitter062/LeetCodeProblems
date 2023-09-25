/*
Example 2: Given a sorted array of unique integers and a target integer, return true if there exists a pair of numbers that sum to target, false otherwise. This problem is similar to Two Sum. (In Two Sum, the input is not sorted).

For example, given nums = [1, 2, 4, 6, 8, 9, 14, 15] and target = 13, return true because 4 + 9 = 13.
*/

// Use Two Pointer Technique, starting from the first and last elements respectively

#include <bits/stdc++.h>
using namespace std;

bool isSortedTwoSum(vector<int> num, int target){
    int rightPointer = num.size()-1;
    int leftPointer = 0;
    while(leftPointer < rightPointer){
        if(num[leftPointer] + num[rightPointer] == target)
            return true;
        else if (num[leftPointer] + num[rightPointer] < target)
            leftPointer++;
        else
            rightPointer--;
        
    }
    return false;
}

int main(){
    vector <int> sortedArray {1, 2, 4, 6, 8, 9, 14, 15};
    int targetSum = 5;

    if(isSortedTwoSum(sortedArray, targetSum))
        cout << "Two Sum Exists :)";
    else
        cout << "Two Sum does not Exist :(";
    return 0;
}