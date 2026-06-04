#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5,7,8};

    int sum = 0 ;
    for(int i=1; i<=arr.size()+1;i++){
        sum+=i;
        // cout<<sum<< " ";
    }
    cout<<endl;
    int s2 = 0;
    for(int i : arr){
        s2+=i;
        // cout<<s2<<" ";
    }

cout<<(sum-s2)<<endl;

    return 0;
}