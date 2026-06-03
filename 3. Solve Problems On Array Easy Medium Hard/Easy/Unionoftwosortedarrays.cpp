#include<bits/stdc++.h>
using namespace std;

int main(){
int i = 0;
int j = 0;

int s1 = arr1.size();
int s2 = arr2.size();
vector<int>union;
while(i<s1 && j<s2){
    if(arr1[i] <= arr2[j]){
        if(union.size() == 0 || union.back() != a[i]){
            union.push_back(arr1[i]);
        }
        i++;
    }
    else{
        if(union.size() == 0 || union.back() != a[i]){
            union.push_back(arr2[j]);
        }
        j++;
    }
}
while(j<s2){
      if(union.size() == 0 || union.back() != a[i]){
            union.push_back(arr2[j]);
        }
        j++;
}

while(i<s1){
       if(union.size() == 0 || union.back() != a[i]){
            union.push_back(arr1[i]);
        }
        i++;
}

    return 0;
}