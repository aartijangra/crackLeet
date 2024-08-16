class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char i: s){
            mpp[i]++;
        }
        
        vector<pair<int,char>> v;
        for(auto it: mpp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        
        string ans="";
        for(int i=v.size()-1; i>=0; i--){
            ans+= string(v[i].first, v[i].second);
        }
        return ans;
    }
};

