class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> Anagram;
        for (char a : s){
            Anagram[a]++;
        }
        for (char b : t){
            if(Anagram.find(b) == Anagram.end() || Anagram[b] ==0){
                return false;
            }
            else{
                Anagram[b]--;}
        }
        for (const auto& element : Anagram) {
            if (element.second != 0) {
                return false;
        }
    }
        return true;

    }
};
