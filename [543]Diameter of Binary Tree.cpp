//
//Given a binary tree, you need to compute the length of the diameter of the tre
//e. The diameter of a binary tree is the length of the longest path between any t
//wo nodes in a tree. This path may or may not pass through the root.
// 
//
// 
//Example: 
//Given a binary tree 
// 
//          1
//         / \
//        2   3
//       / \     
//      4   5    
// 
// 
// 
//Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].
// 
//
// Note:
//The length of path between two nodes is represented by the number of edges bet
//ween them.
// Related Topics Tree 
// 👍 3454 👎 209


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
    int htBt(TreeNode* root)
    {
        if (root==NULL)
            return 0;
        else
            return 1+max(htBt(root->left),htBt(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==NULL)
            return 0;
        return max(htBt(root->left)+htBt(root->right),max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};
//leetcode submit region end(Prohibit modification and deletion)
