#include <bits/stdc++.h> 
using namespace std;
bool findInMatrix(int x, vector<vector<int>> &arr)
{
   int n = arr.size();
   int m = arr[0].size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int midRow = low+(high - low)/2;
        if(arr[midRow][0]<=x && x<= arr[midRow][m-1]){
            int lowCol = 0;
            int highCol = m-1;
            while(lowCol<=highCol){
                int midCol = lowCol + (highCol-lowCol)/2;
                if(arr[midRow][midCol]==x){
                    return true;
                }
                else if(arr[midRow][midCol]<x) lowCol=midCol+1;
                else highCol = midCol -1;
            }
            return false;
        }
        else if(x>arr[midRow][m-1]){
            low = midRow +1;
        }
        else{
            high = midRow -1;
        }
    }
    return false;
}