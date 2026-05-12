#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p = {2,4};
    cout<< p.first <<p.second<<endl;

    // Storing 3 value in pair 
    pair <int,pair<int,int>> q = {1,{2,3}};
    cout<<q.first<<q.second.second << q.second.first<<endl;

    // Creating array of pair

    pair<int,int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<< arr[1].second;

}


// Containers From Here 

void explainVector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(1);
    v.emplace_back(2);    
    v.push_back(1);
    v.emplace_back(2);

    vector <pair<int,int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(3,4);

    vector <int> ve(5,_);
    vector <int> v1(5);

    vector <int> v2(5,20);
    vector <int> v3(v1);

    // How to access vector using iterator 
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    it = it+2;
    cout<<*(it)<<" ";


    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout<< v[0] << " " <<v.at[0];
    cout<< v.back() << " ";

    for(vector <int>::iterator it= v.begin();it!=v.end();it++){
        cout<<*(it) <<" ";
    }

  for(auto it= v.begin();it!=v.end();it++){
        cout<<*(it) <<" ";
    }

    for(auto it : v ){
        cout<<it<<" ";
    }

    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);

    // Insert Function 
    vector <int> v(2,100);
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<v.size();

    v.pop_back();

    v1.swap(v2);

    v.clear();  // erase the entire vector 

    cout<< v.empty();

}


void explainList(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(8);

    // begin ,end , rbegin , rend ,clear, insert , size , swap ... same as vecotr 

}


void explainDeque(){
    deque<int> dq;
    dq.push_back(5);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(8);

    // begin ,end , rbegin , rend ,clear, insert , size , swap ... same as vecotr 

}


void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(6); // {6,4,3,2,1}

    cout<<st.top();  // gives 6

    st.pop();
    cout<<st.top();  // gives 4
    cout<<st.size();
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);


    
}


int main(){

// Pair
explainPair();


//Vector


}