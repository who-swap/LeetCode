class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count  = 0;
       map<int,int> hashMap; int prefixSum = 0;
       hashMap[0] = 1;
       for(auto num:nums){
        prefixSum += num;
        int find_and_remove_el = prefixSum - k;
        // if(hashMap.find(find_and_remove_el)!=hashMap.end()){
        count += hashMap[find_and_remove_el];
        hashMap[prefixSum] +=1;
       }
       return count;
    }
};