#include<bits/stdc++.h>
using namespace std;


long long maxSubarraySum(vector<int> arr, int n)
{
    int ansStart = -1 ;
    int ansEnd = -1;
    int start = 0 ;
    long long sum = 0 , maxi = LONG_MIN;
    for(int i = 0 ; i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
    
    if(sum>maxi){
        maxi = sum ;
        ansStart = start;
        ansEnd = i;
    }
    if(sum<0){
        sum = 0 ;
    }
}
return maxi;
}

