class Solution {
public:
    int maxArea(vector<int>& height) {
        int left  = 0;int right = height.size()-1;
        int maxArea =0;int amount = 0;
        while(left<right){
            int amount = (right-left) * min(height[left],height[right]);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
            if(amount> maxArea) maxArea = amount;
        }
        return maxArea;
    }
};