#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ; int high = n-1;
        int mine = INT_MAX;
        while(low<=high){
            int mid =(low+high)/2;
            if(nums[low]<= nums[mid]){
                mine=min(mine,nums[low]);
                low = mid+1;
            }
            else if (nums[mid]<= nums[high]){
                mine = min(mine,nums[mid]);
                high = mid -1 ;
            }
            else{
                mine = min(mine,nums[mid]);
            }

        }
        return mine;
    }
};