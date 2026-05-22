class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto num:nums){
            if(num>=0){
                pos.push_back(num);
            }
            else{
                neg.push_back(num);
            }
        }
        for(int i =0;i<nums.size()/2;i++){
            nums[i*2] = pos[i];
            nums[i*2+1] = neg[i];
        }
        return nums;
    }
};