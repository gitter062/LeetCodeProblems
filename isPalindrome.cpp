/*
Example 1: Given a string s, return true if it is a palindrome, false otherwise.

A string is a palindrome if it reads the same forward as backward. That means, after reversing it, it is still the same string. For example: "abcdcba", or "racecar".
*/

// Use two pointer technique

#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string str){
    int left = 0;
    int right = str.size()-1;

    while(left < right){
        while(left<right && !isalnum(str[left])){
            left++;
        }
        while(left<right && !isalnum(str[right])){
            right--;
        }
        if(islower(str[left]) != islower(str[right])){
            return false;
        }
        left++;
        right--;
    }
    cout << "this is a palindrome";
    return true;

}

int main(void){
    string string1 = "racecar";
    cout << isPalindrome(string1);
    return 0;
}

