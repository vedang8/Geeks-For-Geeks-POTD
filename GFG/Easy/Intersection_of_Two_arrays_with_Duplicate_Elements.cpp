#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                if(a[i] == b[j]){
                   s.insert(a[i]);
                   break;
                }
            }
        }
        vector<int> ans;
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
    }
};
