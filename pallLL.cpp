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
    bool isPalindrome(ListNode* head) {
        if(head -> next == nullptr) return true;
        
        
        ListNode *temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp -> next;
        }
        
        len = len % 2 == 0 ? len / 2: (len/2) + 1;
        temp = head;
        for(int i = 0; i < len; i++) temp = temp -> next;
        ListNode *p, *q = nullptr;
        while(temp){
            p = temp -> next;
            temp -> next = q;
            q = temp;
            temp = p;
        }
        
        while(q){
            if(q->val != head->val) return false;
            q = q->next;
            head = head -> next;
        }
        
        return true;
        
        
    }
};