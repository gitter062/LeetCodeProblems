/*
Example 3: Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted.
*/

// Use Two Pointer Technique, starting from the first elements of each array respectively

#include <bits/stdc++.h>

using namespace std;

vector<int> getCombinedSort(vector<int> &arr1, vector<int> &arr2){
    vector<int> arr;
    int p1 = 0, p2 = 0;

    while(p1 < arr1.size() & p2 < arr2.size()){
        if(arr1[p1] < arr2[p2]){
            arr.push_back(arr1[p1]);
            p1++;
        }
        else{
            arr.push_back(arr2[p2]);
            p2++;
        }
    }
    while(p1>arr1.size()){
        arr.push_back(arr1[p1]);
        p1++;
    }
    while(p2>arr2.size()){
        arr.push_back(arr2[p2]);
        p2++;
    }

    return arr;
}


int main(void){
    
    vector<int> arr1 = {1, 3, 5, 6};
    vector<int> arr2 = {2, 4, 6};

    vector<int> arr = getCombinedSort(arr1, arr2);

    return 0;
}