#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans = "";
        int i=0;
        while(i<s.length())
        {
            if(s[i]==' ') {i++;continue;}
            if(s[i]!=' ') ans += s[i];
            if(s[i+1]==' ') 
            {st.push(ans);
            ans = "";
            }
            i++;
        }
        if(ans!="" && ans!=" ") st.push(ans);
        string res= "";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
            if(!st.empty())res+=" ";
        }
        return res;
    }
};