#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0 , cnt2 =0;
        int ele1 = INT_MIN, ele2=INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++){
            if(cnt1==0 && nums[i]!=ele2){
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2==0 && nums[i]!=ele1){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2==nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ls;
        int c1 = 0 , c2 =0;
        for(int i = 0 ; i<nums.size(); i++){
             if(nums[i]==ele1) c1++;
             if(nums[i]==ele2) c2++;
        }
        int mini = (int)nums.size()/3+1;
        if(c1>=mini) ls.push_back(ele1);
        if(c2>=mini) ls.push_back(ele2);
        return ls;
    }
};