#include<bits/stdc++.h>
using namespace std ;

void OptimalApproach(vector<int> arr , int d) {
    // Optimal Solution 
   int n = arr.size();
   reverse(arr.begin(),arr.begin()+d);
   reverse(arr.begin()+d,arr.end());
   reverse(arr.begin(),arr.end());
    for(int i : arr){
        cout << i << " " ; 
    }
}

int main(){


    vector<int> arr = {1,2,5,4,3,7,5,9};
    int d = 3 ;
    OptimalApproach(arr,d) ;
    return 0;
}