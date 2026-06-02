#include<bits/stdc++.h>
using namespace std;

int main(){

//  if we use Set here it will take around O(nlogn + n) TC & O(n) SC

// so we are going to use 2 pointer approach 

vector<int> arr = {1,1,2,2,3,3,3,3,4,4,4,4,5};

int i = 0 ; 
for(int j = 1 ; j<arr.size();j++){
    if(arr[i]!=arr[j]){
        arr[i+1] = arr[j];
        i++;
    }
}
cout<<i+1;

    return 0;
}