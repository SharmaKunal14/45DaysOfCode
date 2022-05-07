class Solution{
public:
int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        
        int len = needle.length();
        char x = needle[0];
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                int v= i,k=0;
                while(k<len){
                    if(haystack[v]!=needle[k]){
                       break;
                    }
                     v++;k++;
                    if(k==len){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};