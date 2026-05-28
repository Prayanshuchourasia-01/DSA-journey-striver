#include<iostream>
using namespace std;

// We can only make a hash of 10 ke power 6 inside of main function , if we do it globally we can to till 10 ke power 7
// not beyond that. 

int main(){

    int n ;
    cout<<"Enter The N : "<<endl;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }


    // Precompute 
    int hash[13] = {0};
    for(int i = 0 ; i<n;i++){
        hash[arr[i]]+=1 ;

    }


    int q;
    cout<<"Enter Q  :"<<endl;
    cin>>q;
    while(q--){
        int number ;
        cout<<"Enter the Number to find "<<endl;
        cin>>number;
            //fetch 
        cout<<hash[number]<<endl;


    }


    return 0;
}