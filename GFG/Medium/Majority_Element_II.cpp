#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        // tracking the count of the votes
        map<int, int> vote_count;
        for(int i=0; i<arr.size(); i++){
            vote_count[arr[i]]++;
        }
        vector<int> ans;
        for(auto x : vote_count){
            if(x.second > (arr.size()/3)){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};