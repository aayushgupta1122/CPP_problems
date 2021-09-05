class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left_sum=0;
        int right_sum=0;
        if(nums.size()==1){return 0;}
        if(nums.size()==2){
            if(nums[1]==0)
                return 0;
            else if(nums[0]==0)
                return 1;
            }
        for(int i=0;i<nums.size();i++){
            left_sum=0;
            for(int j=nums.size()-1;j>i;j--){
                left_sum+= nums[j];
            }
            if(right_sum==left_sum){
                return i;
            }
            right_sum+= nums[i];
        }
        return -1;
    }
};
