#include <bits/stdc++.h> 

int firstO(vector<int>& arr, int n, int k){
    int low = 0 ; int high = n-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            first = mid;
            high = mid -1;
        }
        else if (arr[mid]<k)low = mid +1;
        else high = mid-1;
    }
    return first;
}

int secondO(vector<int>& arr, int n, int k){
     int low = 0 ; int high = n-1;
    int second = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            second = mid;
            low = mid+1;
        }
        else if (arr[mid]<k)low = mid +1;
        else high = mid-1;
    }
    return second;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = firstO(arr,n,k);
    if(first==-1) return {-1,-1};
    int second = secondO(arr,n,k);
    return {first,second};
}

int count(vector<int>& arr, int n, int x) {
	pair<int,int> ans = firstAndLastPosition(arr,n,x);
    if(ans.first ==-1) return 0;
    return ans.second - ans.first + 1 ;
}
