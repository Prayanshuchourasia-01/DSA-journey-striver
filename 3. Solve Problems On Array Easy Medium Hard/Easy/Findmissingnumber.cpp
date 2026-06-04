#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5,7,8};
// Optimal Method 1 : using SUM 

//     int sum = 0 ;
//     for(int i=1; i<=arr.size()+1;i++){
//         sum+=i;
//         // cout<<sum<< " ";
//     }
//     cout<<endl;
//     int s2 = 0;
//     for(int i : arr){
//         s2+=i;
//         // cout<<s2<<" ";
//     }

// cout<<(sum-s2)<<endl;




// Optimal Method 2 : Using XOR

int xor1 = 0 , xor2 = 0;
int N = 8;
int n = N-1;
for(int i=0;i<n;i++){
    xor2 = xor2 ^ arr[i];
    xor1 = xor1 ^ (i+1);
}
xor1 = xor1^N;

cout<<(xor1^xor2)<<endl;

    return 0;
}