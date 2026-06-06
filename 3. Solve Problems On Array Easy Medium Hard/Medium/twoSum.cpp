// Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Output : YES
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

// Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
// Output : NO.
// Explanation: There exist no such two numbers whose sum is equal to the target. 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 5, arr[] = {2,6,5,8,11}, target = 14;
    // int N = 5, arr[N] = {2,6,5,8,11}, target = 15 ;
    int left = 0 , right = N-1 ;
    while(left<=right){
        if(arr[left]+arr[right]==target) {
            cout<<1<<endl; break;
        }
        else if(arr[left]+arr[right]<target){
            left+=1; 
        } 
        else{
            right-=1;
        }
    }
    cout<<0;
    return 0;

}