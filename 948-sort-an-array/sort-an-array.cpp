class Solution {
public:
    void merge(vector<int>& vec, int start, int mid, int end){
        vector<int> temp;
        int i=start;
        int j = mid+1;
        while(i<= mid && j<= end){
            if(vec[i]<= vec[j]){
                temp.push_back(vec[i]);
                i++;
            }
            else{
                temp.push_back(vec[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(vec[i]);
            i++;
        }
        while(j<= end){
            temp.push_back(vec[j]);
            j++;
        }
        for(int idx = 0; idx<temp.size(); idx++){
            vec[idx+start] = temp[idx];
        }
    }
    void mergeSort(vector<int>& vec, int start, int end){
        if(start < end){
            int mid = start + (end - start)/2;
            mergeSort(vec, start, mid);
            mergeSort(vec, mid+1, end);
            merge(vec, start, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};