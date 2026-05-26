#include<iostream>
using namespace std;

void NtO(int N){
    if(N==0) return;
    
    cout<<N<<endl;
    N-=1;
    NtO(N);
}
int main(){

    
    int N;
    cout<<"Enter N : ";
    cin>>N;
    NtO(N);

    return 0;
}