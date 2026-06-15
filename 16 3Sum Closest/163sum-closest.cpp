class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int n = nums.size();
  int ans = 0;
  int aspas=INT_MAX;
  sort(nums.begin(),nums.end());
  for(int i = 0;i<n;i++){
    int j = i+1;int k = n-1;
    while(j<k){
      int sumS = nums[i]+nums[j]+nums[k];
      if(aspas>abs(sumS-target)){
        aspas = abs(sumS-target);
        ans = sumS;
      }
      if(sumS>target){
        k--;
      }
      else if(sumS<target){
        j++;
      }
      else{
        j++;k--;
        while(j<k && nums[j-1]==nums[j]) j++;
        while(j<k && nums[k+1]==nums[k]) k--;
      }
    }
  }
  return ans;
    }
};