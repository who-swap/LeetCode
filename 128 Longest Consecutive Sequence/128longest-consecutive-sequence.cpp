class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0) return 0;

        unordered_set<int> arr;

        for(int i = 0; i < n; i++)
        {
            arr.insert(nums[i]);
        }

        int cnt = 1, mxcnt = 1;

        for(auto it : arr)
        {
            if(arr.find(it - 1) == arr.end())
            {
                cnt = 1;

                int x = it;

                while(arr.find(x + 1) != arr.end())
                {
                    cnt++;
                    x++;
                }

                mxcnt = max(mxcnt, cnt);
            }
        }

        return mxcnt;
    }
};