#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sen, string sw) {
        int index = -1;
        vector<string> words;
        string str = "";
        for(int i=0; i<sen.size(); i++){
            if(sen[i] == ' '){
                words.push_back(str);
                str = "";
            }else{
                str += sen[i];
            }
        }
        words.push_back(str);
        for(int i=0; i<words.size(); i++){
            string st = words[i];
            cout << st << endl;
            if(st.size() >= sw.size()){
                int j;
                for(j=0; j<sw.size(); j++){
                    if(st[j] != sw[j]){
                        break;
                    }
                }
                if(j == sw.size()){
                    index = i+1;
                    break;
                }
            }
        }
        return index;
    }
};