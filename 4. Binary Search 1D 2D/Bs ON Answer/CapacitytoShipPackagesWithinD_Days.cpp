#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int>& w, int mid) {
    int days = 1; int load = 0;
    for(int i = 0 ;i<w.size();i++){
        if(load+w[i]>mid){
            days +=1;
            load = w[i];
        }
        else{
            load+=w[i];
        }
    }
    return days;
}

int maxe(vector<int>& arr) {
    int m = INT_MIN;
    for (int i : arr) {
        m = max(m, i);
    }
    return m;
}

int sume(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += i;
    }
    return sum;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxe(weights);
        int high = sume(weights);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (findDays(weights, mid) > days) {
                low = mid + 1;
            } else  {
                high = mid - 1;
            }
        }
        return low;
    }
};