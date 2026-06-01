#include<bits/stdc++.h>
using namespace std ;


int OptimalApproach(vector<int> arr) {
    // Optimal Solution 
    for(int i = 0 ; i<arr.size()-1; i++){
        if(arr[i]>=arr[i+1]){}
        else{
            return false;
        }
    }
    return true;

}

int main(){


    vector<int> arr = {1,2,5,4,3,7,5,9};

    cout<<OptimalApproach(arr)<<endl;

    


    return 0;
}