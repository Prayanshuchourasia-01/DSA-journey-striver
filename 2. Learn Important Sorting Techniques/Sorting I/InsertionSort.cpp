#include <bits/stdc++.h>
using namespace std;
// this takes around near about O(n2) n square 
void InsertionSort(int arr[] , int n ){
    for(int i = 0 ; i<=n-1; i++){
        int j = i ;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp ;


            j--;
        }
    }
}
// in the best case it takes O(n) TC.

int main(){

    int n = 6;
    int arr[n] = {2,5,4,7,3,8};

    InsertionSort(arr,n);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }


    return 0;
}