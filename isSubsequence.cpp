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

bool isSubsequece(string sequenceString, string subString){
    int sequecePointer = 0, subStringPointer = 0;
    while(sequecePointer<sequenceString.size() and subStringPointer<subString.size()){
        if(sequenceString[sequecePointer] == subString[subStringPointer])
            subStringPointer++;
        
        sequecePointer++;
    }
    if (subStringPointer == subString.size())
        return true;

    return false;
}


int main(){
    string candidateString1 = "ace";
    string candidateString2 = "aec";
    string referenceString = "abcde";
    cout << isSubsequece(referenceString, candidateString1) << " " << isSubsequece(referenceString, candidateString2) << endl;
    
    return 0;
}