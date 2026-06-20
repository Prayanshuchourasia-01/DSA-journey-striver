#include<bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n) {
    if(n==1) return {0};
    vector<int> r;
    r.push_back(0);
    r.push_back(1);
    for(int i = 0 ;i<n-2;i++){
        int third = r[i] + r[i+1];
        r.push_back(third);
    }
    return r;
}