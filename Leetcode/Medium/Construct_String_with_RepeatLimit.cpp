#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        priority_queue<pair<char, int>> pq;
        for(auto x : mp){
            pq.push({x.first, x.second});
        }
        string ans = "";
        int t = repeatLimit;
        char last_char = '0';
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            char ch = x.first;
            int cnt = x.second;
            if(last_char == ch){
                t--;
            }
            while(t!=0 && cnt > 0){
                ans += ch;
                cnt--;
                t--;
                last_char = ch;
            }
            t = repeatLimit;
            if(!pq.empty()){
                auto y = pq.top();
                pq.pop();
                if(last_char != y.first){
                    ans += y.first;
                    y.second--;
                    last_char = y.first;
                    if(y.second > 0){
                        pq.push({y.first, y.second});
                    }
                }
                if(cnt > 0){
                    pq.push({x.first, cnt});
                }
            }
            
        }
        return ans;
    }
};