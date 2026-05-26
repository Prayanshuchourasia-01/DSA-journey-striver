#include<iostream>
using namespace std;
string name = "Prayanshu";
int N = 5;
int count = 0;
void printN(){
    if(count==N) return ;
    cout<<name<<endl;
    count+=1;
    printN();
}

int main(){

printN();



    return 0;
}