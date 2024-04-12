/*
Example 3: Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted.
*/

// Use Two Pointer Technique, starting from the first elements of each array respectively
#include <bits/stdc++.h>

using namespace std;

vector<int> getSortedCombination(vector<int> arr1, vector<int> arr2){
    vector<int> combinedArray;
    int first = 0, second = 0;
    while(first<arr1.size()-1 && second<arr2.size()){
        if(arr1[first] < arr2[second]){
            combinedArray.push_back(arr1[first]);
            first++;
        }
        else{
            combinedArray.push_back(arr2[second]);
            second++;
        }
    }
    while(first<arr1.size()){
        combinedArray.push_back(arr1[first]);
        first++;
    }
    while(second<arr2.size()){
        combinedArray.push_back(arr2[second]);
        second++;
    }

    return combinedArray;
}


int main(){
    vector<int> arr1 {1,2,3,8};
    vector<int> arr2 {5,6,7};

    vector<int> result = getSortedCombination(arr2, arr1);

    for (auto value: result)
        cout << value << " ";
    cout << endl;
    return 0;
}