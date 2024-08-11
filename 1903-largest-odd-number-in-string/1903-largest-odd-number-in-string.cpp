class Solution {
public:
    string largestOddNumber(string num) {
        string ans =  "";
        int i = num.length() - 1;
        for(i=num.length()-1;i>=0;i--)
        {
            if((num[i] - '0') % 2 == 1)
            {
                break;
            }
        }
        for(int k=0;k<=i;k++)
        {
            ans += num[k];
        }
        return ans;
    }
};