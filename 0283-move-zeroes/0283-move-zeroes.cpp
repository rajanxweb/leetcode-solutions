class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int zero_count = 0;
        if(nums.size()<=1){
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
            else{
                zero_count++;
            }
        }
        for(int x=0; x<zero_count; x++){
            nums[nums.size()-1-x] = 0;
        }
    }
};