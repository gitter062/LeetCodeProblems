/*
Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/

// leetcode link: https://leetcode.com/problems/valid-palindrome/submissions/1496493873

// Use two pointer technique

#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool isPalindrome(string s){
        int right = s.size()-1, left = 0;
        while(left < right){
            while(left < right & !isalnum(s[left]))
                left++;
            while(left < right & !isalnum(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++; right--;
        }
        return true;
    }
};

