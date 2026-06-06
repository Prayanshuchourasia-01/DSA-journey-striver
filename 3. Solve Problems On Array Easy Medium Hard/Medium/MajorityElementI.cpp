#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1,2,2,4,2,2,2,2,5,4,3}
    // Moore Voting Algo : 
    int ele = 0 ;
    int cnt = 0 ;

    for(int i = 0 ; i<v.size() ; i++){
        if(cnt==0){
            cnt = 1 ;
            ele = v[i];
        }
        else if(v[i]==ele){
            cnt++;
        }
        else{
            c--;
        }
    }
    int cnt = 0 ;
    for(int i = 0 ; i<v.size() ; i++){
        if(v[i] == ele) cnt1++;
    }
    if(cnt1>(v.size()/2)){ 
        return ele;
        // cout<<ele;
    }
cout<<-1;
    
    return 0;
}