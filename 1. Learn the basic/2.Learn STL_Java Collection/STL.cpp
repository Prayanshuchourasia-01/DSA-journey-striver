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

int main(){

// Pair
explainPair();


//Vector


}