#include<iostream>
using namespace std;

void OtN(int count,int N){
    if(count==N+1) return;
    
    cout<<count<<endl;
    count+=1;
    OtN(count,N);
}
int main(){

    int count = 1;
    int N;
    cout<<"Enter N : ";
    cin>>N;
    OtN(count,N);

    return 0;
}