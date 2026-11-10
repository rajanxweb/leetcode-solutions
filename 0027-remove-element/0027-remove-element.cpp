class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                vec.push_back(nums[i]);
            }
        }
        int size = vec.size();
        for(int i=0; i<size; i++){
            nums[i] = vec[i];
        }
        return size;
    }
};