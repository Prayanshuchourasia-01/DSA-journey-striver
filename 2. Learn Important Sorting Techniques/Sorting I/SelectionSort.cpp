#include <bits/stdc++.h>
using namespace std;
// this takes around near about O(n2) n square 
void selectionSort(int arr[] , int n ){
    for(int i = 0 ; i<=n-2 ; i++){
            int min = i ; 
            for(int  j = i ; j<=n-1 ; j++){
                 if(arr[j]<arr[min]) min = j;

            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }

}


int main(){

    int n = 6;
    int arr[n] = {2,5,4,7,3,8};

    selectionSort(arr,n);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }


    return 0;
}