class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for(auto col: nums){
            if(col == 0) red++;
            else if(col == 1) white++;
            else blue++;
        }
        int index = 0;
        for(int i = 0; i < red; i++) nums[i] = 0;
        index = red;
        for(int i = index; i < index + white; i++){ nums[i] = 1;
    }
        index += white;
        for(int i = index ; i < index + blue  ; i++) nums[i] = 2;
        
    }
};