/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Constraints:
1 <= s.length <= 105
s[i] is a printable ascii character.
*/
#include<bits/stdc++.h>
using namespace std;

class swapCharacters {
    public:
    void swap(char &a1, char &a2){
        char temp = a1;
        a1 = a2;
        a2 = temp;
    }
};

class Solution {

public:
    
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1;
        swapCharacters* swapper = new swapCharacters();
        while(left < right){
            swapper->swap(s[left], s[right]);
            left++; 
            right--;
        }
    }
};