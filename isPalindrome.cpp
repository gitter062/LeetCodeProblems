/*
Example 1: Given a string s, return true if it is a palindrome, false otherwise.

A string is a palindrome if it reads the same forward as backward. That means, 
after reversing it, it is still the same string. For example: "abcdcba", or "racecar".
*/


// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.size() - 1;
    while(left < right){
        if (s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main ()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}