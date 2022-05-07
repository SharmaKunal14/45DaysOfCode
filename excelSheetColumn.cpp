class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        string res = "";
        while (columnNumber)
        {
            char ch ='A' + (columnNumber - 1) % 26;
            res = ch + res;
            columnNumber = (columnNumber-1)/26;  
        }
        return res;
    }
};