//Given a binary tree, check whether it is a mirror of itself (ie, symmetric aro
//und its center). 
//
// For example, this binary tree [1,2,2,3,4,4,3] is symmetric: 
//
// 
//    1
//   / \
//  2   2
// / \ / \
//3  4 4  3
// 
//
// 
//
// But the following [1,2,2,null,3,null,3] is not: 
//
// 
//    1
//   / \
//  2   2
//   \   \
//   3    3
// 
//
// 
//
// Follow up: Solve it both recursively and iteratively. 
// Related Topics Tree Depth-first Search Breadth-first Search 
// 👍 4623 👎 109


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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        queue<TreeNode*> queue1,queue2;
        queue1.push(root->left);
        queue2.push(root->right);
        TreeNode *leftQ,*rightQ;
        while (!queue1.empty() && !queue2.empty())
        {
            leftQ=queue1.front();
            queue1.pop();
            rightQ=queue2.front();
            queue2.pop();
            if (leftQ==NULL && rightQ==NULL)
                continue;
            if (leftQ==NULL || rightQ==NULL)
                return false;
            if (leftQ->val!=rightQ->val)
                return false;
            queue1.push(leftQ->left);
            queue1.push(leftQ->right);
            queue2.push(rightQ->right);
            queue2.push(rightQ->left);
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
