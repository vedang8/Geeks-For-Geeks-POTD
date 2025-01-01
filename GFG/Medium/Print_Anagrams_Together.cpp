#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        map<string, vector<string>> mp;
        for(auto i : arr){
            string temp = i;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto i : mp){
            res.push_back(i.second);
        }
        return res;
    }
};