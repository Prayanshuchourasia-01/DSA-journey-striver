
// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
// Input: N = 12
// Output: [1, 2, 3, 4, 6, 12]
// Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.


#include<iostream>
using namespace std;

int main(){
   
    int num;
    cout<<"Enter The Num : ";
    cin>>num;

    for(int i = 1 ; i<num+1; i++){
        if(num%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}