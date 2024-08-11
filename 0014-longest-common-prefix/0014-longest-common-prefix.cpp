class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int n = s.length();
        string fin = "";
        for(int i=0;i<n;i++)
        {
            fin += s[i];
            for(auto x:strs)
            {
                if(x.substr(0, fin.length()) != fin) 
                {
                    fin.pop_back();
                    return fin;
                }
            }
        }
    return fin;
    }
};