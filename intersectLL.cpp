/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0, l2 = 0;
        ListNode *h1 = headA, *h2 = headB;
        while(h1 && h2){
            if(h1 == h2) return h1;
            h1 = h1 -> next;
            h2 = h2 -> next;
            l1++;
            l2++;
        }
        
        while(h1){
            l1++;
            h1 = h1 -> next;
        }
        
        while(h2){
            l2++;
            h2 = h2 -> next;
        }
        int diff = abs(l1 - l2);
        if(l1 > l2) {
            while(diff){
                headA = headA -> next;
                diff--;
            }
        }
        else{
             while(diff){
                headB = headB -> next;
                diff--;
            }
        }
        
        while(headA && headB){
            if(headA == headB) return headA;
            headA = headA -> next;
            headB = headB -> next;
        }
        
        return nullptr;
        
    }
};