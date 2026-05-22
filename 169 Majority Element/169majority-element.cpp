class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = 0;int count =0;
        for(auto num:nums){
            if(count==0){
                cand = num;
                count++;
            }
           
            else if(num==cand){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt1 =0;
        for(auto num:nums){
            if(num==cand) cnt1++;
        }
        if(cnt1>nums.size()/2){
            return cand;
        }
        return 0;
        
    }
};