#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int cn =0;
        int n = arr.size();
        unordered_map<int,int>mp;

        for(int i=0; i<n; i++){

            mp[arr[i]]++;

        }

        for(int i =0; i<n; i++){

            int a = arr[i]+k;

            if(k==0){

                if(mp.find(a)!= mp.end()){

                    cn += mp[a]-1;

                    mp[a]--;

                }

                continue;

            }

            if(mp.find(a) != mp.end()){

                cn += mp[a];

            }

        }

        return cn;
    }
};