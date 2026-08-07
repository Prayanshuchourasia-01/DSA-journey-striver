#include <bits/stdc++.h> 
using namespace std;
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    int row = 0 , col = arr[0].size()-1;
    while(row<arr.size()&& col>=0){
        if(arr[row][col]==x) return true;
        else if(arr[row][col]>x) col--;
        else row++;
    }
    return false;
}