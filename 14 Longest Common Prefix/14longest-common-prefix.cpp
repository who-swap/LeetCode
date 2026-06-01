class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string common = strs[0];
      for(int i= 0;i<strs.size();i++){
        for(int j = 0;j<strs[0].size();j++){
            if(common[j] != strs[i][j]){
                int k = common.size()-1;
                while(k>=j){
                    common.pop_back();
                    k--;
                }
            }
        }
      }
      return common;
    }
};