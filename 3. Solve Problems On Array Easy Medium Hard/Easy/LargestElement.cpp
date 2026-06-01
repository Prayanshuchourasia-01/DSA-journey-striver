// Example 1:
// Input:
//  arr[] = {2, 5, 1, 3, 0}  
// Output:
//  5  
// Explanation:
  
// 5 is the largest element in the array.

// Example 2:
// Input:
//  arr[] = {8, 10, 5, 7, 9}  
// Output:
//  10  
// Explanation:
  
// 10 is the largest element in the array.

#include<bits/stdc++.h>
using namespace std ;

int BruteForceApproach(vector<int> arr) {
    // Brute Force Solution 
    sort(arr.begin(),arr.end());  // TC - O(Nlogn)
    return arr[arr.size()-1];
}

int OptimalApproach(vector<int> arr) {
    // Optimal Solution 
    int large = arr[0];
    for(int i : arr){             //  TC - O(n)
        if(i>large) large=i;
    }
    return large;

}

int main(){


    vector<int> arr = {1,2,5,4,3,7,5,9};

    cout<<BruteForceApproach(arr)<<endl;

    cout<<OptimalApproach(arr)<<endl;

    







    return 0;
}