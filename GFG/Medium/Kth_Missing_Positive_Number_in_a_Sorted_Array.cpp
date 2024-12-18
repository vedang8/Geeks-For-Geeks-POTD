#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int indx = 0;
        int num = 1;
        while(num <= arr[arr.size()-1]){
            if(num == arr[indx]){
                indx++;
            }else{
                k--;
                if(k == 0){
                    return num;
                }
            }
            num++;
        }
        if(k == 1){
            return num;
        }
        k--;
        while(k--){
            num++;
        }
        return num;
    }
};