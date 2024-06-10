class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int longest = 1, cnt = 0,last_smaller = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1 == last_smaller)
            {
                cnt = cnt + 1;
                last_smaller = nums[i];
            }
            else if(nums[i]!= last_smaller)
            {
                cnt = 1;
                last_smaller = nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};