class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     
        int left = 0;int right = 0;
        while(right<nums.size()){
            if(nums[right]%2==0){
                swap(nums[right],nums[left]);
                left++;
            }
            right++;
        }
        return nums;
    }
};