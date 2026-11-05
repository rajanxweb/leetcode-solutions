class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int i=0; i<nums.size(); i++){
            us.insert(nums[i]);
        }
        return nums.size() != us.size();
    }
};