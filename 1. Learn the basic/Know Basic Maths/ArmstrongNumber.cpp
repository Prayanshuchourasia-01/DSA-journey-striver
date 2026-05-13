// Example 1:
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
// Example 2:
// Input:N = 371                
// Output: True
// Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371
            

#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int dup = n;
    int count=0;
    double result = 0;
    int lastDigit;
    cout<<"Enter the Value Of N : ";
    cin>>n;
int dup = n;
   while(n>0){
    count+=1;
    lastDigit = n%10;
    n=n/10;
   }

    while(dup>0){
    lastDigit = n%10;
    dup=n/10;
    result += pow(lastDigit,count);
cout<< pow(lastDigit,count);
   }

cout<<result<<endl;
cout<<count;




    return 0;
}