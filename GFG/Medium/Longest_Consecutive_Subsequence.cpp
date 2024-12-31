#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        set<int>st{arr.begin(),arr.end()};
        arr = {st.begin(),st.end()};
        int maxi = 1, cnt = 1, start = arr[0];
        
        for(int i=1; i<arr.size(); i++){
            if(start+1 == arr[i]){
                cnt++;
            }
            else{
                maxi = max(maxi, cnt);
                cnt = 1;
            }
            start = arr[i];
        }
        maxi = max(maxi, cnt);
        return maxi;
    }
};