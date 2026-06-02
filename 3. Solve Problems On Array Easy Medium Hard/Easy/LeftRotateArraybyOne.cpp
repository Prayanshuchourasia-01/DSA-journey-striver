#include<bits/stdc++.h>
using namespace std ;

int main(){
    // optimal approach 
    vector<int> arr = {1,2,3,4,5,6,7} ;
    int temp = arr[0]; 
    for(int i = 1 ; i<arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp ;


    // Iterate over the vector
    for(int i : arr){
        cout<<i << " " ;
    }

    return 0 ; 
}