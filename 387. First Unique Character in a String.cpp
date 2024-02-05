//https://leetcode.com/problems/first-unique-character-in-a-string/description/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> repeating;
        for (int i = 0; i < s.length(); i++) {
            if (repeating.find(s[i]) == repeating.end()){
                repeating[s[i]]=1;
            }
            else{
                repeating[s[i]]++;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if(repeating[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
