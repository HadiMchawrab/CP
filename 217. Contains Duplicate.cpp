// https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        int arrayLength = nums.size();
        for (int i = 0; i < arrayLength ; ++i){
            if (mySet.find(nums[i]) != mySet.end()){
                return true;
            }
            else{
                mySet.insert(nums[i]);
            }
        }
        return false;
    }

};
