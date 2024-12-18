#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> discount;
        int j;
        for(int i=0; i<prices.size(); i++){
            for(j=i+1; j<prices.size(); j++){
                if(prices[j] <= prices[i]){
                   discount.push_back(prices[i]-prices[j]);
                   break; 
                }     
            }
            if(j == prices.size())
               discount.push_back(prices[i]);
        }
        return discount;
    }
};