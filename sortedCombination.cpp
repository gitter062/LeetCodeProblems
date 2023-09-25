/*
Example 3: Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted.
*/

// Use Two Pointer Technique, starting from the first elements of each array respectively
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedCombination(vector<int> arr1, vector<int> arr2){
    vector<int> result;
    int arr1Pointer = 0, arr2Pointer = 0;
    while(arr1Pointer < arr1.size() and arr2Pointer < arr2.size()){
        if(arr1[arr1Pointer] < arr2[arr2Pointer]){
            result.push_back(arr1[arr1Pointer]);
            arr1Pointer++;
        }
        else if(arr1[arr1Pointer] >= arr2[arr2Pointer]){
            result.push_back(arr2[arr2Pointer]);
            arr2Pointer++;
        }
    }
    while(arr1Pointer < arr1.size()){
        result.push_back(arr1[arr1Pointer]);
        arr1Pointer++;
    }
    while(arr2Pointer < arr2.size()){
        result.push_back(arr2[arr2Pointer]);
        arr2Pointer++;
    }
    return result;
}

int main(){
    vector<int> sortedArray1 {1,4,7,20};
    vector<int> sortedArray2 {3,5,6};

    vector<int> answer = sortedCombination(sortedArray1, sortedArray2);
    for(int value: answer)
        cout << value <<" ";
    
    cout << endl;
    return 0;
}