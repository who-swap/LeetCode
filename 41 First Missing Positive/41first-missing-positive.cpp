class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt = 1;
        int left = 0;
        while(left<n){
            if(nums[left]<=0) {left++;continue;}
            else if(nums[left]!=cnt){
               return cnt;
            }
            else{
                cnt++;left++;
                while(left<n && nums[left-1]==nums[left]) left++;

            }
        }
        return cnt;
    }
};