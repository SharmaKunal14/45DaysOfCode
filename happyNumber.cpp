class Solution {
public:
    bool isHappy(int n) {
        int count=6;
        int idx; 
        int ans=0;
        while(count)   {
            ans=0;
            while(n)  {
                idx=n%10;
                ans+=idx*idx;
                n=n/10;
            }
            if(ans==1)   {
                return true;
            }
             n=ans;
            count--;
        }
        return false;
    }
};