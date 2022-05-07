class Solution {
public:
    string cmp(string ans, string check)
    {
        
        if(ans.size() > check.size()) swap(ans,check);
        
        string cprix = "";
        for(int i=0 ; i<ans.size() ; i++)
        {
            if(ans[i]==check[i])
            {
                cprix+=ans[i];
            }
            else break;
        }
        return cprix;
    }
    
    string longestCommonPrefix(vector<string>& strs) 
    {

        string ans = strs[0];
        for(int i=1 ; i<strs.size() ; i++)
        {
            ans = cmp(ans,strs[i]);
        }
        return ans;
        
    }
    
};