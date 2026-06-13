
// anti-clockwise direction

#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for(int i = 0 ; i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    for(int i = 0 ; i<n-1;i++){
        for(int j = i+1 ; j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    return matrix;
}