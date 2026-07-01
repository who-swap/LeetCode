class Solution {
public:
    
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> sumHash;
        vector<int> temp;
        for(int i =0;i<arr.size();i++){
        if(sumHash.find(arr[i])==sumHash.end()){
            sumHash[arr[i]] = i;
        }
        int rem = target - arr[i];
        if(sumHash.find(rem)!=sumHash.end() && sumHash[rem]!=i){
            temp.push_back(i);
            temp.push_back(sumHash[rem]);
            return temp;
        }
        }
    return temp;
  }
 
    
};