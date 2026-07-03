#include <bits/stdc++.h>
using namespace std;
double multi(double n , int m){
    double ans = 1.0;
    for(int i=1 ; i<=m; i++){
        ans = ans*n;
    }
    return ans;
}

int NthRoot(int n, int m) {
    double low = 1; double high = m;
    double eps = 1e-6;
    while((high-low)>eps){
        double mid = (low+high)/2.0;
        if(multi(mid,n)<m){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return high;
}