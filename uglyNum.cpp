class Solution {
public:
    int nthUglyNumber(int n) {
        int dp[n+1];
      
        dp[1]=1;
        int p1=1;
        int p3=1;
        int p5=1;
        for(int i=2;i<=n;i++){
            int f1=2*dp[p1];
            int f2=3*dp[p3];
            int f3=5*dp[p5];
            int min_=min(f1,min(f2,f3));
            dp[i]=min_;
            if(f1==min_){
                p1++;
            }
            if(f2==min_){
                p3++;
            }
              if(f3==min_){
                p5++;
            }
        }
        return dp[n];
    }
};