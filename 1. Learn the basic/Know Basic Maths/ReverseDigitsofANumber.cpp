// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

// Input: N = 7789                
// Output: 9877
// Explanation: The reverse of number 7789 is 9877.


#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
     cout<<"Enter the Value Of N : ";
    cin>>n;
    int revNum = 0 ;
    while(n>0){
        lastDigit = n%10;
        n=n/10;
        revNum = (revNum*10) + lastDigit;
    }
    cout<<revNum ;

    return 0;
}