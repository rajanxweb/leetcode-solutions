class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate =0;
        int count = 0;
        for(int val:nums){
            if(count == 0){
                candidate = val;
            }
            if(val == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};