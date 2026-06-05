#include <bits/stdc++.h>
using namespace std;
int main(){

vector<int> a = {1,1,1,2,2,6,3};
int k = 6;

// 2 Pointer Approach 

    int left = 0 , right = 0;
    long long sum = a[0];
    int maxLen = 0 ; 
    int n = a.size();

 while(right<n);{
    while(left<=right &&  sum>k){
        sum-=a[left];
        left++;
    }
if(sum==k){
    maxLen = max(maxLen,right-left+1);
}
    right+=1;
    if(right>n)sum += a[right];
 }

 cout<<maxLen;
    return 0;

}