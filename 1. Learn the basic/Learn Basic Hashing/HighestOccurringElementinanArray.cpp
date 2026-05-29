// Example 1:
// Input: array[] = {10,5,10,15,10,5};
// Output: 10 15
// Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.


// Example 2:
// Input: array[] = {2,2,3,4,4,2};
// Output: 2 3
// Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }


    // Pre-Compute
    map<int,int> mpp;
    
    for(int i = 0 ; i<n;i++){
        mpp[arr[i]]++;
    }

int max = 0 ;
int maxEle = 0 ;

int min = 100001 ;
int minEle = 0;

for(auto it : mpp){
    cout<<it.first<<" --> "<<it.second<<endl;
    if(it.second > max) {
        max = it.second;
        maxEle = it.first;
    }
    if(it.second<min){
        min = it.second;
        minEle = it.first;
    }
}

cout<<maxEle<<"    "<<minEle<<endl;
    return 0;
}





