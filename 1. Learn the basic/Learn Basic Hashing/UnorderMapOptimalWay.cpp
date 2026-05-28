#include<bits/stdc++.h>
using namespace std;
// using map : storing and fetch takes around (logn) TC
// by using map we can also compute the value more then 10 ke power 9;

int main(){

    int n ;
    cout<<"Enter The N : "<<endl;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }


    // Precompute 
   unordered_map<int,int> mpp;
   for(int i = 0 ; i<n ; i++){
    mpp[arr[i]]++; 
   }


    int q;
    cout<<"Enter Q  :"<<endl;
    cin>>q;
    while(q--){
        int number ;
        cout<<"Enter the Number to find "<<endl;
        cin>>number;
            //fetch 
        cout<<mpp[number]<<endl;


    }


    return 0;
}