//Given two binary trees and imagine that when you put one of them to cover the 
//other, some nodes of the two trees are overlapped while the others are not. 
//
// You need to merge them into a new binary tree. The merge rule is that if two 
//nodes overlap, then sum node values up as the new value of the merged node. Othe
//rwise, the NOT null node will be used as the node of new tree. 
//
// Example 1: 
//
// 
//Input: 
//	Tree 1                     Tree 2                  
//          1                         2                             
//         / \                       / \                            
//        3   2                     1   3                        
//       /                           \   \                      
//      5                             4   7                  
//Output: 
//Merged tree:
//	     3
//	    / \
//	   4   5
//	  / \   \ 
//	 5   4   7
// 
//
// 
//
// Note: The merging process must start from the root nodes of both trees. 
// Related Topics Tree 
// 👍 3366 👎 178


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1!=NULL && t2!=NULL)
        {
            TreeNode* t3=new TreeNode(t1->val+t2->val);
            t3->left=mergeTrees(t1->left,t2->left);
            t3->right=mergeTrees(t1->right,t2->right);
            return t3;
        }
        if (t1!=NULL && t2==NULL)
        {
            return t1;
        }
        if (t1==NULL && t2!=NULL)
        {
            return t2;
        }
        return NULL;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
