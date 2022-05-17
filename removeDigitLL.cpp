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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = head;
        ListNode *trail = head;
        ListNode *nHead = nullptr;
        if(!head) return nullptr;
        while(temp && temp -> val == val){
            temp = temp->next;
            trail = trail -> next;
        }
        nHead = trail;
        while(temp){
            
            if(temp -> val == val){
                while(trail->next != temp) trail = trail -> next;
                trail -> next = temp -> next;
            }

            
            temp = temp -> next;
            
            
        }
    return nHead;
    }
};