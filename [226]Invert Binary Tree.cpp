//Invert a binary tree. 
//
// Example: 
//
// Input: 
//
// 
//     4
//   /   \
//  2     7
// / \   / \
//1   3 6   9 
//
// Output: 
//
// 
//     4
//   /   \
//  7     2
// / \   / \
//9   6 3   1 
//
// Trivia: 
//This problem was inspired by this original tweet by Max Howell: 
//
// Google: 90% of our engineers use the software you wrote (Homebrew), but you c
//an’t invert a binary tree on a whiteboard so f*** off. 
// Related Topics Tree 
// 👍 3819 👎 61


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
    TreeNode* invertTree(TreeNode* root) {
        if (root==NULL)
            return NULL;
        if (root->left==NULL && root->right==NULL)
            return root;
        if (root->left==NULL || root->right==NULL)
        {
            if (root->left==NULL)
            {
                swap(root->left,root->right);
                root->left=invertTree(root->left);
                return root;
            }
            else
            {
                swap(root->left,root->right);
                root->right=invertTree(root->right);
                return root;
            }

        } else
        {
            swap(root->left,root->right);
            root->left=invertTree(root->left);
            root->right=invertTree(root->right);
            return root;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
