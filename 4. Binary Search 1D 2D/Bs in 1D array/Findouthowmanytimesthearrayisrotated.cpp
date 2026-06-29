#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    int n = arr.size();
    int low = 0 ;
    int high = n-1;
    int mini = INT_MAX;
    int idx = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<mini){
                mini = arr[low];
                idx = low;
            }
            break;
        }
        if(arr[low]<=arr[mid]){
             if(arr[low]<mini){
                mini = arr[low];
                idx = low;
            }
            low = mid +1;
        }
        else{
            high = mid -1;
            
            if(arr[mid]<mini){
            mini = arr[mid];
                idx = mid;
            }
        }
    }
    return idx;
}