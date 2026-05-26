#include<iostream>
using namespace std;

int SFN(int N,int sum){
    if(N<1) return sum ;
    SFN(N-1,sum+N);
}
int main(){

    int sum = 0 ;
    int N;
    cout<<"Enter N : ";
    cin>>N;
    cout<<SFN(N,sum);
    return 0;
}