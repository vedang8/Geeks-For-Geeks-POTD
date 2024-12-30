#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        for(int i=0; i<a.size(); i++){
            s.insert(a[i]);
        }
        for(int j=0; j<b.size(); j++){
            s.insert(b[j]);
        }
        return s.size();
    }
};