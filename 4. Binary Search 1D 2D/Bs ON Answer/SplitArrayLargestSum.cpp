#include <bits/stdc++.h>
using namespace std;
int maxi(vector<int>& arr){
    int m = INT_MIN;
    for(int i : arr){
        m = max(m,i);
    }
    return m;
}


int sum(vector<int>& arr){
    int s = 0;
    for(int i : arr){
        s+=i;
    }
    return s;
}

bool possible(vector<int>& arr, int mid, int m){
    int pages = 0;
    int stdCnt = 1;
    for(int i : arr){
        if(i>mid) return false;
        if(pages+i>mid){
            stdCnt++;
            pages=i;
        }
        else{
            pages+=i;
        }
    }
    if(stdCnt>m){
        return false;
    }
    return true;
}


int findPages(vector<int>& arr, int n, int m) {

    if(m > n)
        return -1;

    int low = maxi(arr);
    int high = sum(arr);

    while(low <= high){
        int mid = low + (high - low)/2;

        if(possible(arr, mid, m)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}


int largestSubarraySumMinimized(vector<int> a, int k) {
    return findPages(a,a.size(),k);
}