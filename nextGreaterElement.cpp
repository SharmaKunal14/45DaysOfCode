class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        unordered_map<int,int> mp;
        int index = 0;
        for(auto x: nums2){
            mp[x] = index++;
        }
        
        for(auto x: nums1){
            bool found = false;
            for(int i = mp[x]; i < nums2.size(); i++){
                if(nums2[i] > x){
                    ans.push_back(nums2[i]);
                    found = true;
                    break;
                }
            }
            
            if(!found) ans.push_back(-1);
        }
        
        return ans;
    }
};