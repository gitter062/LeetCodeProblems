/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
#include<bits/stdc++.h>
using namespace std;

void swapCharacters(char& char1, char& char2){
    char1 = char1 + char2;
    char2 = char1 - char2;
    char1 = char1 - char2;
}
void reverseString(vector<char>& s) {
    int left = 0, right = s.size()-1;
    
    while(left < right){
        swapCharacters(s[left], s[right]);
        right--;
        left++;
    }
}
int main(){
    vector <char> stringInQuestion {'h', 'e', 'l', 'l', 'o'};
    reverseString(stringInQuestion);
    for (char value:stringInQuestion)
        cout<<value << " ";
    return 0;
}