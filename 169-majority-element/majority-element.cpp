class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int max = nums.size()/2;
        for(auto val:freq){
            if(val.second >max){
                return val.first;
            }
        }
        return 0;
    }
};