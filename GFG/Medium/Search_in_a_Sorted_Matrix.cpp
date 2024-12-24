#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        for(int i=0; i<mat.size(); i++){
            int maxi = *max_element(mat[i].begin(), mat[i].end());
            if(x <= maxi){
                for(int j=0; j<mat[i].size(); j++){
                    if(mat[i][j] == x){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};