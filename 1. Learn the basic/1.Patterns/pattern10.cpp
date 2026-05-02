#include <iostream>
using namespace std;
void pattern10(int n){

    // forward print 
for (int i = 0 ; i<n;i++){
    for(int j= 0 ; j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

    //backward print 
    for (int i = 0 ; i<n-1;i++){

    for(int j=0;j<n-1-i;j++){
        cout<<"*";
    }


cout<<endl;

}



}
int main(){
    int n;
    cout<<"Enter THe Value Of N : ";
    cin>>n;
    pattern10(n);

    return 0;
}