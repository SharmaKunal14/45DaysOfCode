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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *nHead;
        ListNode *temp1 = list1, *temp2 = list2;
        if(!list1 && !list2) return nullptr;
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val < list2->val) {head = list1; temp1 = temp1 -> next;}
        else {head = list2; temp2 = temp2 -> next;}
        nHead = head;
        while(temp1 && temp2){
            if(temp1 -> val < temp2 -> val){
                head -> next = temp1;
                head = head -> next;
                temp1 = temp1 -> next;
            }
            else{
                head -> next = temp2;
                head = head -> next;
                temp2 = temp2 -> next;
            }
        }
        while(temp1){
            head -> next = temp1;
                head = head -> next;
                temp1 = temp1 -> next;
        }
        while(temp2){
             head -> next = temp2;
                head = head -> next;
                temp2 = temp2 -> next;
        }
        return nHead;
    }
};