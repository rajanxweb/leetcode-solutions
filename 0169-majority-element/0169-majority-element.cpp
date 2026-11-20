class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        int max = 0;
        int first = nums[0];
        for(auto val: um){
            if(val.second>max){
                max = val.second;
                first = val.first;
            }
        }
        return first;
    }
};