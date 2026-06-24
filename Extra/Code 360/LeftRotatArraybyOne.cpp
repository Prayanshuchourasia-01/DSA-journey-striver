#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {

    int temp = arr[0];
    rotate(arr.begin(),arr.begin()+1,arr.end());
    return arr;
}
