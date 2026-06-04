#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> nums = {1,0,1,1,1,1,0,0,1,1};
        int MaxCount = 0 ;
        int count = 0;
        for (int i = 0 ; i<nums.size();i++){
            if(nums[i]==1) count+=1;
            else{
                count = 0;
            }
            if(MaxCount<count){
                MaxCount = count;
            }  
        }
        cout<< MaxCount ;


    return 0;
}