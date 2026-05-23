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


void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    queue.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.push(4); // {1,2,3,4}
    q.emplace(6); // {1,2,3,4,6}

    q.back()+=5;  // gives 11
    q.pop(); // remove 1 
    cout<<q.front();  // gives 4
 // size , swap , empty ,same as stack 

}


void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    queue.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.push(4); // {1,2,3,4}
    q.emplace(6); // {1,2,3,4,6}

    q.back()+=5;  // gives 11
    q.pop(); // remove 1 
    cout<<q.front();  // gives 4
 // size , swap , empty ,same as stack 

}

void explainPQ(){

    // max heap 
    priority_queue<int> pq;
    pq.push(3); // {3}
     pq.push(1); // {3,1}
     pq.push(5); // {5,3,1}
     pq.emplace(13); // {13,5,3,1}
    cout<<pq.top(); // prints  13

    pq.pop(); // remove 13

    //   other funciton are same


    // min-heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(3); // {3}
    pq.push(1); // {1,3}
    pq.push(5); // {1,3,5}
    pq.emplace(13); // {1,3,5,13}
    cout<<pq.top(); // prints  1
    
}

void explainSet(){ // Puts Sorted and unique Elements also
    set<int> s ;
    st.insert(1); // {1}
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(6); // {1,2,6}
    st.insert(4); // {1,2,6,4}
    st.emplace(1);

// Functionality of insert in vector can be used also , that only increase efficency

// begin(),end(),rbegin(), , rend() , size() 
// empty() , and swap() are same as those of above 
// {1,2,6,4}
auto it = s.find(3);
// {1,2,6,4}
auto it = s.find(9);
// {1,2,6}
s.erase(4);

int cnt = s.count(1);

auto it = s.find(3);
s.erase(it);

auto it1 = s.find(2);
auto it2 = s.find(4);
s.erase(it1 , it2); // this will remove the element from it1 to it2 

auto it = s.upper_bound(2);
auto it = s.lower_bound(3);

}


void explainMultiSet(){
    // Every Things is same as set
    // only stores duplicate element also
    multiset<int> ms ;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // {} it will erase all the occurance of 1
    
    int cnt = ms.count(1);
    ms.erase(ms.find(1));  // find() will return a iterator and erase function will erase the iterator only not the whole 1 occurance 

    ms.erase(ms.find(1),ms.find(1)+2);
    // rest all function are same 

}





int main(){

// Pair
explainPair();


//Vector


}