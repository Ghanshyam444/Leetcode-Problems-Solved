#include<bits/stdc++.h>
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(st.empty())
                {
                    st.push('(');
                    continue;
                }
                st.push('(');
                ans+='(';
            }
            else if(s[i]==')')
            {
                if(st.empty())continue;
                else if((st.top() == '(') && st.size()==1)
                {
                    st.pop();
                }
                else if((st.top() == '(' )&& st.size()>=2)
                {
                    st.pop();
                    ans+=')';
                }
            }
        }
        return ans;
    }
};