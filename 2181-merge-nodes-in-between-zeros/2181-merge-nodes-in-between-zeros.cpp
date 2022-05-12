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
    ListNode* mergeNodes(ListNode* head) {
         ListNode* root=new ListNode(),*ans=root,*r;
    if(head)
        head=head->next;
    int sum=0;
    while(head)
    {
        if(head->val==0)
        {
            root->val=sum;
            root->next=new ListNode();
            r=root;
            root=root->next;
            head=head->next;
            sum=0;
        }
        else{
            sum+=head->val;
            head=head->next;
        }
    }
    r->next=nullptr;
    return ans;
        
    }
};