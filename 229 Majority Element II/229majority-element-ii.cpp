class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = 0;int cand2 = 0;
        int count1 =0;int count2 = 0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=cand2){
                count1  =1 ;cand1=nums[i];
            }
            else if(count2==0 && nums[i]!=cand1 ){
                count2 = 1;cand2=nums[i];
            }
            else if(cand1==nums[i]){
                count1++;
            }
            else if(cand2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        int cnt1 = 0;int cnt2 =0;
        for(int i =0;i<nums.size();i++){
            if(cand1==nums[i]){
                cnt1++;
            }
            else if(cand2==nums[i]){
                cnt2++;
            }
        }
        vector<int> ans;
        if(cnt1>nums.size()/3) {
            ans.push_back(cand1);
        }
        if(cnt2>nums.size()/3) {
            ans.push_back(cand2);
        }
        return ans;
    }
};