class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,el;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt == 0)
            {
                el = nums[i];
                cnt = 1;
            }
            else if(nums[i] == el) cnt++;
            else
                cnt--;
        }
        //as in problem  not stated that there is compulsarily a majority element present so we have to check it
        int cnt0 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el) cnt0++;
        }
        if(cnt0 > nums.size()/2) return el;
        return -1;
    }
};