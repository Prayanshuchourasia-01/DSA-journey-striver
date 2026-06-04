#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,1,2,3,3,4,4};
      int ans = 0 ;
        for(int val:nums){
            ans = ans ^ val ;
        }
        cout<< ans;

    return 0;
}

