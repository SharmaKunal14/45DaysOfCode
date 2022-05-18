class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
      vector<vector<int>>v={p1,p2,p3,p4};
        set<double>st;
        for(int i=0;i<3;i++)
        {
            int x1=v[i][0];
            int y1=v[i][1];
            for(int j=i+1;j<4;j++)
            {
                int x2=v[j][0];
                int y2=v[j][1];
                double d=sqrt(pow((x1 - x2),2)+pow((y1-y2),2));
                if(d==0)
                    return false;
                st.insert(d);
            }
        }
        return st.size()==2;   
    }
};