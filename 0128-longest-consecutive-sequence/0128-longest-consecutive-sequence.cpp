class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        if(nums.empty()) return 0;
        int longest = 1;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it: s)
        {
            int cnt = 0;
            if(s.find(it-1) == s.end())
            {
             cnt = 1;
                int x = it;
                while(s.find(x+1)!=s.end())
                {
                    cnt++;
                    x++;
                }
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};