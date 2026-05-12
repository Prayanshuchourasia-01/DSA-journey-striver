



#include<iostream>
using namespace std;
int main(){
    int n;
    int lastDigit;
    int revNum=0;
    cout<<"Enter the Value Of N : ";
    cin>>n;
    int num = n;
    while(n>0){
        lastDigit = n%10;
        n=n/10;
        revNum = (revNum*10)+lastDigit;
    }

    if(num==revNum){
        cout<<"Palidrom";
    }
    else{
        cout<<"Not a Palidrom";
    }



    return 0;
}