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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || head -> next == nullptr) return head;
        
     ListNode *trail = head;
     ListNode *temp = head -> next;
    ListNode *nHead = head;
     ListNode *trail1 = trail;
        
        
    while(temp){
        if(temp -> val == trail-> val){
            while(temp && temp ->val == trail -> val){
                temp = temp -> next;
            }
            
            trail -> next = temp;
            trail = temp;
            
            
            
        }
        else{
            trail = trail -> next;
        }
        if(temp)
            temp = temp -> next;
    }
        
        return nHead;
    }
};