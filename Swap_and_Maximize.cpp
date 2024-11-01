#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        vector<int> v(arr);
        sort(arr.begin(), arr.end());
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int n = arr.size();
        vector<int> ans;
        for(int i=0; i<n/2; i++){
            ans.push_back(arr[i]);
            ans.push_back(v[i]);
        }
        if(n % 2){
            ans.push_back(arr[n/2 + 1]);
        }
        int sum = abs(ans[n-1] - ans[0]);
        for(int i=0; i<n-1; i++){
            sum += abs(ans[i]-ans[i+1]);
        }
        return sum;
    }
};