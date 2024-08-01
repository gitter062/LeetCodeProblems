/*
Example 1: Given a string s, return true if it is a palindrome, false otherwise.

A string is a palindrome if it reads the same forward as backward. That means, after reversing it, it is still the same string. For example: "abcdcba", or "racecar".
*/

// Use two pointer technique

#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string s){
        int left = 0, right = s.size()-1;
        while(left<right){
            while(left<right && !isalnum(s[left]))
                left++;
            while(left<right && !isalnum(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right])){
                cout<< "Not a Palindrome!";
                return false;
            }
            left++;
            right--;
        }
        cout << "It's a Palindrome!";
        return true;

}

int main(void){
    string string1 = "abba";
    cout << isPalindrome(string1);
    return 0;
}

