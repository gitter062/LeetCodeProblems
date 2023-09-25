/*
Example 1: Given a string s, return true if it is a palindrome, false otherwise.

A string is a palindrome if it reads the same forward as backward. That means, 
after reversing it, it is still the same string. For example: "abcdcba", or "racecar".
*/

// Use two pointer technique
// C++ program for the above approach
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int rightPointer = s.size()-1;
    int leftPointer = 0;

    while(leftPointer < rightPointer){
        if(s[leftPointer] != s[rightPointer])
            return false;
        leftPointer++;
        rightPointer--;
    }

    return true;
}

int main(){
    string text1 = "ABCDCBA";
    string text2 = "ABDCDA";
    bool answer1 = isPalindrome(text1);
    bool answer2 = isPalindrome(text2);
    cout << answer1 <<' '<< answer2 << endl;

    return 0;
}
