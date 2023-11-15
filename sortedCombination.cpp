/*
Example 3: Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted.
*/

// Use Two Pointer Technique, starting from the first elements of each array respectively
#include <bits/stdc++.h>

using namespace std;

vector<int> getSortedCombination(vector<int>& arr1, vector<int>& arr2){
    vector<int> answer;
    int pointer1 = 0, pointer2 = 0;

    while(pointer1 < arr1.size() and pointer2 < arr2.size()){
        if(arr1[pointer1] < arr2[pointer2]){
            answer.push_back(arr1[pointer1]);
            pointer1++;
        }
        else{
            answer.push_back(arr2[pointer2]);
            pointer2++;
        }
    }

    while(pointer1 < arr1.size()){
            answer.push_back(arr1[pointer1]);
            pointer1++;
    }

    while(pointer2 < arr2.size()){
            answer.push_back(arr2[pointer2]);
            pointer2++;
    }

    return answer;
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