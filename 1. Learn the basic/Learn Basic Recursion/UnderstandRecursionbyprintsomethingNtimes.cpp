#include<iostream>
using namespace std;
 int count =0 ;
void rec(){
    if(count==6) return;
    cout<<count<<endl;
    count+=1;
    rec();
}
int main(){
   

rec();
    return 0;
}