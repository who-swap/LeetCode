class Solution {
public:
    void nextPermutation(vector<int>& arr) {
      
  int n = arr.size()-1;
  int breakingpoint =-1;
  for(int i = 0;i<=n-1;i++){
    if(arr[i]<arr[i+1]){
      breakingpoint = i;
    } 
  }
  if(breakingpoint!=-1){
    int j = n;
    while(j>=0){
      if(arr[j]>arr[breakingpoint]){

        swap(arr[breakingpoint],arr[j]); break;
      }
      j--;
    }
    reverse(arr.begin()+breakingpoint+1,arr.end());

  }
  else{
    reverse(arr.begin(),arr.end());
  }

    }

};