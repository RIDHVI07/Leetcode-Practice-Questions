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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
   ListNode* p = head;
        int count = 0;
        while(p != nullptr){
            count++;
            p = p->next;
        }
        
       
        if(count == n){
            return head->next;
        }
        
        p = head;
        for(int i = 0; i < (count - n) - 1; i++){
            p = p->next;
        }
        
        p->next = p->next->next;

        return head;
    }
};