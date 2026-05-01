# include <iostream>
using namespace std;
void pattern3(int n){
for(int i = 1 ; i<n+1;i++){
        for (int j = 1 ; j<i+1; j++){
            cout<<i; 
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;
    pattern3(n);
return 0;
}