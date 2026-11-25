class Solution {
public:
    // long long factorial(int val){
    //     if(val <=1){
    //         return 1;
    //     }
    //     long long result = val*factorial(val-1);
    //     return result;
    // }
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count =0;
        long long streak =0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == 0){
                // count++;
                streak++;
            }
            else{
                if(streak!= 0){
                    // count++;
                    //count = factorial(streak);
                    // for(int i=1; i<=streak; i++){
                    //     count+=i;
                    // }
                    count += (streak * (streak+1))/2;
                    streak = 0;
                }
            }
        }
        if(streak!=0){
            count += (streak*(streak+1))/2;
        }
        return count;
    }
};