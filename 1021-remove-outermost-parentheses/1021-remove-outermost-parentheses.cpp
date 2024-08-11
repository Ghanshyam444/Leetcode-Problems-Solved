#include<bits/stdc++.h>
class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(balance == 0)
                {
                    balance++;
                    continue;
                }
                balance++;
                ans+='(';
            }
            else if(s[i]==')')
            {
                if(balance==0)continue;
                else if(balance == 1)
                {
                    balance--;
                }
                else if(balance>=2)
                {
                    balance--;
                    ans+=')';
                }
            }
        }
        return ans;
    }
};