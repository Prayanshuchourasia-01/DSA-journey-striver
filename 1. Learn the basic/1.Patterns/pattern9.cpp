#include <iostream>
using namespace std;
void pattern9(int n){

    // forward print 
for (int i = 0 ; i<n;i++){
    // space 
    for(int j= 0 ; j<n-i-1;j++){
        cout<<" ";
    }
    // star
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

    //backward print 

    for (int i = 0 ; i<n;i++){
    // space 
    for(int j= 0;j<i;j++){
        cout<<" ";
    }
    // star
    for(int j = 0 ; j<2*n-(2*i+1);j++){
        cout<<"*";
    }
cout<<endl;

}



//space



//     for(int i = n ; i>0;i--){
        
//         if(i!=n){
//             for(int j = 1 ;j<n-i+1;j++){
//             cout<<"   ";
        
//         }
//        }
//         for(int j=2*i-1;j>0;j--){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
}
int main(){
    int n;
    cout<<"Enter THe Value Of N : ";
    cin>>n;
    pattern9(n);

    return 0;
}