class Solution {
public:
    bool checkCols(vector<vector<int>> &matrix){
        int n = matrix.size();
        for(int i =0;i<n;i++){
            map<int,int> hashMap;
            for(int j = 0;j<n;j++){
                if(hashMap.find(matrix[j][i]) != hashMap.end()) return false;
                if(matrix[j][i]<=n) hashMap[matrix[j][i]]++;
            }
        }
        return true;
    }
    bool checkRows(vector<vector<int>> &matrix){
        int n = matrix.size();
        for(int i=0;i<n;i++){
            map<int,int> hashMap;
            for(int j =0;j<n;j++){
                if(hashMap.find(matrix[i][j]) != hashMap.end()) return false;
                hashMap[matrix[i][j]]++;
            }
        }
        return true;
    }

    bool checkValid(vector<vector<int>>& matrix) {
        bool cRows = checkRows(matrix);
        bool cCols = checkCols(matrix);
        if(cRows && cCols) return true;
        return false;
    }
};