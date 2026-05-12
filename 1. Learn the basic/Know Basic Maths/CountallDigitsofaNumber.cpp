
// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.
                        
// Example 2:
// Input:N = 7789              
// Output: 4
// Explanation: The number 7789 has 4 digits. 

#include<iostream>
using namespace std;
int main(){
    int N;
    int count=0;
    cout<<"Enter the Value Of N : ";
    cin>>N;

   while(N>0){
    count+=1;
    N=N/10;
   }
cout<<count;


    return 0;
}