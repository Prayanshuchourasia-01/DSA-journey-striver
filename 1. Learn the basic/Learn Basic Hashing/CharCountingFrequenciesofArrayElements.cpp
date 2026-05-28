#include<iostream>
using namespace std;


int main(){

    string s ;
    cout<<"Enter The String : "<<endl;
    cin>>s;

    

    // Precompute 
    int hash[26] = {0};
    for(int i = 0 ; i<s.size();i++){
        hash[s[i]-'a']++;

    }


    int q;
    cout<<"Enter Q  :"<<endl;
    cin>>q;
    while(q--){
        char c ;
        cout<<"Enter the Number to find "<<endl;
        cin>>c;
            //fetch 
        cout<<hash[c-'a']<<endl;


    }


    return 0;
}