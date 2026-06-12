#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a = {1,101,102,1,2,3,54,4};
    int n = a.size();
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0 ; i < n ; i++){
        st.insert(a[i]);
    }

    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int cnt = 1 ; 
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt+=1;

            }
            longest = max(longest,cnt);
        }
    }

    return 0 ;
}
