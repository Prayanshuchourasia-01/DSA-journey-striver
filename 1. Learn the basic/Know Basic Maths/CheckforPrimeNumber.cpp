// Example 1:
// Input:N = 2            
// Output:True              
// Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
// Example 2:
// Input:N =10                               
// Output: False
// Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.            



#include<iostream>
using namespace std;

int main(){
   
    int num;
    cout<<"Enter The Num : ";
    cin>>num;

    for(int i = 2 ; i<num; i++){
        if(num%i==0){
            cout<<"Not Prime";
            break;
        }
        cout<<"Prime";
    }
    
    return 0;
}

