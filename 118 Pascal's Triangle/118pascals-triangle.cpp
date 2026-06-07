class Solution {
public:
    vector<int> generateRow(int n){
        int ans  =1;
        vector<int> temp;
        temp.push_back(ans);
        for(int i = 1;i<n;i++){
            ans *= n -i;
            ans /= i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans ;
    }
};