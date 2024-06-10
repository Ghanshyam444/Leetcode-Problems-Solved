class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> pos,neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        if(pos.size()>neg.size())
        {
            for(int i=0;i<neg.size();i++)
            {
                ans[2*i] = pos[i];
                ans[2*i + 1] = neg[i];
            }
            int j = 2*neg.size();
            for(int i=neg.size(); i< pos.size();i++)
            {
                ans[j] = pos[i];
                j++;
            }
        }
        else
        {
             for(int i=0;i<pos.size();i++)
            {
                ans[2*i] = pos[i];
                ans[2*i + 1] = neg[i];
            }
            int j = 2*pos.size();
            for(int i=pos.size(); i< neg.size();i++)
            {
                ans[j] = neg[i];
                j++;
            }
        }
        return ans;
        
    }
};