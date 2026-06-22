vector<int> rec(int n,int idx,vector<int>& r){
       
    if(idx>n){
        return r;
    }
    r.push_back(idx);
    return rec(n,idx+1,r);
}

vector<int> printNos(int x) {
    vector<int> ans;    
    rec(x,1,ans);
    return ans;
}
