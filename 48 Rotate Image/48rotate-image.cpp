class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n = matrix.size();
  int i = 0;
  reverse(matrix.begin(),matrix.end());
  while(i<n){
    int top = i;int left =i;
    while(top<n){
      swap(matrix[i][top],matrix[left][i]);
      top++;left++;
    }
    
    i++;
  }  
    }
};