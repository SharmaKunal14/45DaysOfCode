/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp -> next;
        }
        
        int ans = 0;
        int power = v.size() - 1;
        for(auto x : v){
            ans += x * pow(2, power--);
        }
        
        return ans;
    }
};