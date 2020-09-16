//Merge two sorted linked lists and return it as a new sorted list. The new list
// should be made by splicing together the nodes of the first two lists. 
//
// Example: 
//
// 
//Input: 1->2->4, 1->3->4
//Output: 1->1->2->3->4->4
// 
// Related Topics Linked List 
// 👍 4865 👎 625


//leetcode submit region begin(Prohibit modification and deletion)
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1==NULL)
            return l2;
        if (l2==NULL)
            return l1;
        ListNode *head=NULL,*l3;
        if(l1->val<=l2->val)
        {
            l3=new ListNode(l1->val);
            head=l3;
            l1=l1->next;
        } else
        {
            l3=new ListNode(l2->val);
            head=l3;
            l2=l2->next;
        }
        while (l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                ListNode  *temp=new ListNode(l1->val);
                temp->next=NULL;
                l3->next=temp;
                l3=l3->next;
                l1=l1->next;
            } else
            {
                ListNode  *temp=new ListNode(l2->val);
                temp->next=NULL;
                l3->next=temp;
                l3=l3->next;
                l2=l2->next;
            }
        }
        while(l1!=NULL)
        {
            l3->next=l1;
            l1=l1->next;
            l3=l3->next;
        }
        while (l2!=NULL)
        {
            l3->next=l2;
            l2=l2->next;
            l3=l3->next;
        }
        l3->next=NULL;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
