#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int> arr, int k,int mid){
    int cntCow = 1 , last = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last >= mid){
            cntCow++;
            last = arr[i];
        }
    }
    if(cntCow>=k) return true;
    else return false;
}

int aggressiveCows(vector<int> &stall, int k)
{
   sort(stall.begin(),stall.end());
   int ans = -1;
   int low = 1 ;
   int high = stall[stall.size()-1] - stall[0];
   while(low<=high){
       int mid = low+(high-low)/2;
       if(canWePlace(stall,k,mid)==true){
           ans = mid;
           low = mid +1;    
       }
       else{
           high = mid - 1;
       }
   }
    return ans;
}