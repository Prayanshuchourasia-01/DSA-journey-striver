#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {10,22,12,3,0,6};
    vector<int>ans;
    int maxi = INT_MIN;
    int n = a.size();

    for(int i = n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }

sort(ans.begin(),ans.end());


    return 0;
}