#include<bits/stdc++.h>
using namespace std;
int div(vector<int>& nums, int mid){
    double val = 0;
    int ans = 0;
    for(int i : nums){
        val = (double)i/mid;
        ans += ceil(val);
    }
    return ans;
}

int maxe(vector<int>& nums){
    int m = INT_MIN;
    for(int i : nums){
        m = max(m,i);
    }
    return m;
}

// int mine(vector<int>& nums){
//     int mi = INT_MAX;
//     for(int i : nums){
//         mi = min(mi,i);
//     }
//     return mi;
// }

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxe(nums);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(div(nums,mid)>threshold){
                low = mid +1;
            }
            else{
                high = mid - 1 ;
            }
        }
        return low;
    }
};