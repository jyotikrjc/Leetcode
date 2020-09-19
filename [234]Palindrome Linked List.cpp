//Given a singly linked list, determine if it is a palindrome. 
//
// Example 1: 
//
// 
//Input: 1->2
//Output: false 
//
// Example 2: 
//
// 
//Input: 1->2->2->1
//Output: true 
//
// Follow up: 
//Could you do it in O(n) time and O(1) space? 
// Related Topics Linked List Two Pointers 
// 👍 3678 👎 381


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
    bool isPalindrome(ListNode* head) {
        string s1="";
        if (head==NULL)
            return true;
        while (head!=NULL)
        {
            int val=head->val;
            s1+=val-'0';
            head=head->next;
        }
        int n=s1.length();
        for (int i = 0,j=n-1; i <j ; ++i,--j) {
            if (s1[i]!=s1[j])
                return false;
        }
            return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
