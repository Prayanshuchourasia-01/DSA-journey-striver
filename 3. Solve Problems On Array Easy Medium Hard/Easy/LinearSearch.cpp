#include<bits/stdc++.h>
using namespace std;
int linear(int arr[] , int n , int x){
      for(int i = 0 ; i<n ; i++){
        if(arr[i]==x) return i;
    }
    return -1;
}
int main(){

int n = 5;
int arr[n] = {1,2,4,3,5};
int x = 4;

cout<<linear(arr,n,x)<<endl;

    return 0 ;
}