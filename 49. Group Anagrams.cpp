//https://leetcode.com/problems/group-anagrams/description
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> Grouping;
        for(auto s : strs){
          string k = s;
          sort(s.begin(),s.end());
          if (Grouping.find(s) == Grouping.end()){
              Grouping[s] = {k};
          }
          else{
              Grouping[s].push_back(k);
          }
        }
        
        vector <vector<string>> Output;
        for(auto m : Grouping){
            Output.push_back(m.second);
        }
        return Output;
    }
};
