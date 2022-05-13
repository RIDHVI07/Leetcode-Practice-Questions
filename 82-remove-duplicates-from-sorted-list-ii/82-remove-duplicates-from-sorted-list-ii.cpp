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
         struct ListNode *cur = head, *prev=NULL;
         struct ListNode *temp=NULL;
        
        while(cur != NULL && cur->next!=NULL){
        temp=cur;
        while(temp->next && (temp->val == temp->next->val)){
            temp=temp->next;
        }
        
        if(cur == temp){
            prev = cur;
            cur = cur->next;
        }else{
            if(prev == NULL){
                head = temp->next;
            }else{
                prev->next = temp->next;
            }
            cur = temp->next;
        }
    }

    return head;
    }
};