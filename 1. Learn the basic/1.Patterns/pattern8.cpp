#include <iostream>
using namespace std;
void pattern8(int n){
    for(int i = n ; i>0;i--){
        
        if(i!=n){
            for(int j = 1 ;j<n-i+1;j++){
            cout<<"   ";
        
        }
       }
        for(int j=2*i-1;j>0;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter THe Value Of N : ";
    cin>>n;
    pattern8(n);

    return 0;
}