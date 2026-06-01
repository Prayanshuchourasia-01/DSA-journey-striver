#include<bits/stdc++.h>
using namespace std ;


int OptimalApproach(vector<int> arr) {
    // Optimal Solution 
    int largest = arr[0];
    int Slarge = -1 ;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]>largest){
            Slarge = largest ;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > Slarge){
            Slarge = arr[i];
        }
    }
    return Slarge;

}

int main(){


    vector<int> arr = {1,2,5,4,3,7,5,9};

    cout<<OptimalApproach(arr)<<endl;

    







    return 0;
}