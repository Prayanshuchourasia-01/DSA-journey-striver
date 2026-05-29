#include <bits/stdc++.h>
using namespace std;
// this takes around near about O(n2) n square  which is worst and avg 
void BubbleSort(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){
          for(int j = 0 ; j<n ; j++){
            if(arr[i] < arr[j]) {
                 int temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
            }
          }
    }
}


void BubbleSortOPT(int arr[] , int n ){
    for(int i = n-1 ; i>=0 ; i--){
          for(int j = 0 ; j<=i-1 ; j++){
            if(arr[j] > arr[j+1]) {
                 int temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;
            }
          }
    }
}


// Complete with Edge Case -- Best Case O(n)

void BubbleSortOPT(int arr[] , int n ){
    for(int i = n-1 ; i>=0 ; i--){
        int didSwap = 0 ;
          for(int j = 0 ; j<=i-1 ; j++){
            if(arr[j] > arr[j+1]) {
                 int temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;
                 didSwap=1;
            }
          }
          if(didSwap==0) break;
    }

}

int main(){

    int n = 6;
    int arr[n] = {2,5,4,7,3,8};

    BubbleSortOPT(arr,n);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }


    return 0;
}