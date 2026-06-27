class Solution {
public:
    int binarySearch(vector<int> &arr,int target,bool leftSearching){
        int n = arr.size();
        int idx = -1;
        int left = 0;
        int right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if (arr[mid]>target){
                right = mid - 1;
            }
            else if(arr[mid]<target){
                left = mid+1;
            }
            else{
                idx = mid;
                if(leftSearching){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums,target,true);
        int right = binarySearch(nums,target,false);
        
        return {left,right};
    }
};