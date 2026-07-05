#include<bits/stdc++.h>
using namespace std; 
bool possible(vector<int>& bloomDay,int mid, int m, int k){
    int cnt = 0;
    int n_bloom = 0;
    for(int i = 0 ; i<bloomDay.size();i++){
        if(mid>=bloomDay[i]){
            cnt++;
        }
        else{
            n_bloom+=cnt/k;
            cnt = 0;
        }
    }
        n_bloom+=cnt/k;
        if(n_bloom>=m){
            return true;
        }
        else{
            return false;
        }
    
}

int maxe(vector<int>& bloomDay){
    int m = INT_MIN;
    for(int i : bloomDay){
        m = max(m,i);
    }
    return m;
}

int mine(vector<int>& bloomDay){
    int mi = INT_MAX;
    for(int i : bloomDay){
        mi = min(mi,i);
    }
    return mi;
}

int roseGarden(vector<int> bloomDay, int k, int m)
{
	long long val = (long long)m*k;
        if(bloomDay.size()<val) return -1;
        int low = mine(bloomDay);
        int high = maxe(bloomDay);
        while(low<=high){
            int mid = low + (high - low)/2;
            if(possible(bloomDay,mid,m,k)==true){
                high = mid - 1;
            }
            else{
                low = mid + 1 ;
            }
        }
        return low;
    }