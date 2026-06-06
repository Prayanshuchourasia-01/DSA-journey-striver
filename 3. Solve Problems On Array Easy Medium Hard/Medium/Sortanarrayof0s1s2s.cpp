
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,1,1,2,0,1,2,0,1};
    int low = 0 , mid = 0 , high = arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low+=1;
            mid+=1;
        }
        else if(arr[mid]==1){
            mid+=1;
        }
        else{
            swap(arr[mid],arr[high]);
            high-=1;
        }
    }
    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;

}