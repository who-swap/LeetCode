class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int right = 0;int left  =0;
        while(right<nums.size()){
            if(nums[right]%2==0){
                swap(nums[left],nums[right]);
                left++;
            }
            right++;
        }
        left = 1;right = nums.size()/2;
        while(nums[left]%2==0){
            swap(nums[left],nums[right]);
            left+=2;
            right++;
        }
        return nums;
    }
};