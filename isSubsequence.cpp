/*
Example 4: 392. Is Subsequence.

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a sequence of characters that can be obtained by deleting 
some (or none) of the characters from the original string, while maintaining the relative 
order of the remaining characters. For example, "ace" is a subsequence of "abcde" while 
"aec" is not.
*/
// use two pointer technique. One for each string, starting from the beginning.
// when matches the characters, increment both pointers, when does not match, only
// increment the pointer that belongs to the reference string.

#include <bits/stdc++.h>

using namespace std;
bool isSubstring(string referenceString, string candidateString){
    int referencePointer = 0, candidatePointer = 0;

    while(referencePointer < referenceString.size() && candidatePointer < candidateString.size()){
        if(referenceString[referencePointer] == candidateString[candidatePointer]){
            candidatePointer++;
        }
        referencePointer++;
    }

    return candidatePointer == candidateString.size();
}

int main(){
    string string1  = "abcde";
    string string2 = "adc";

    cout << "this is a " << isSubstring(string1, string2) << endl;
    return 0;
}