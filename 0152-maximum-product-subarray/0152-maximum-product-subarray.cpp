class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_sum=INT_MIN;
        int suff=1;
        int pre=1;
        for(int i=0;i<nums.size();i++){
            suff=suff*nums[i];
            if(suff>max_sum){
                max_sum=suff;
            }
            pre=pre*nums[nums.size()-1-i];
            if(pre>max_sum){
                max_sum=pre;
            }
            if(pre==0){
                pre=1;
            }if(suff==0){
                suff=1;
            }

        }
        return max_sum;
        
    }
};