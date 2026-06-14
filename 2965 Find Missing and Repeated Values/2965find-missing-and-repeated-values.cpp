class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> hash;
        vector<int> ans(2,0);
        int n = grid.size();int sqN = n*n;
        int sum=0;int nSum = (sqN * (sqN+1))/2;
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                if(hash.find(grid[i][j])!=hash.end()){
                    ans[0] = grid[i][j];
                    sum -= grid[i][j];
                }
                hash[grid[i][j]]++;
                sum+=grid[i][j];
                
            }
        }
        ans[1] = nSum - sum;
        return ans;
    }
};