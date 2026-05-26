#include<iostream>
using namespace std;

int Fact(int N){
   if(N==1) return 1;

   return (N*Fact(N-1));
}
int main(){

    int count = 1;
    int N;
    cout<<"Enter N : ";
    cin>>N;
    cout<<Fact(N)<<endl;

    return 0;
}