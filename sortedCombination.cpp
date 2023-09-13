/*
Example 3: Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted.
*/

// Use Two Pointer Technique, starting from the first elements of each array respectively

#include <bits/stdc++.h>

using namespace std;

vector<int> sortedCombination(vector<int>& arr1, vector<int>& arr2)
{
    vector<int> answer;

    int pointer_arr1 = 0, pointer_arr2 = 0;

    while(pointer_arr1 < arr1.size() && pointer_arr2 < arr2.size()){
        if(arr1[pointer_arr1] > arr2[pointer_arr2]){
            answer.push_back(arr2[pointer_arr2]);
            pointer_arr2++;
            }
        else{
            answer.push_back(arr1[pointer_arr1]);
            pointer_arr1++;
            }
    }

    while(pointer_arr1 < arr1.size()){
        answer.push_back(arr1[pointer_arr1]);
        pointer_arr1++;
        }
    while(pointer_arr2 < arr2.size()){
        answer.push_back(arr2[pointer_arr2]);
        pointer_arr2;
        }

    return answer;
}

int main()
{
    vector<int> vector1{1,4,7,20};
    vector<int> vector2{3,5,6};
    vector<int> answer = sortedCombination(vector1, vector2);

    for(int value: answer)
        cout << value << " ";

    return 1;
}