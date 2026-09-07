/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* ans=new TreeNode(3);
    void solve(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(original->val==target->val)
        {
            ans=cloned;
            cout<<cloned->val;
            return;
        }
        if(original->left!=NULL)
        solve(original->left,cloned->left,target);
        if(original->right!=NULL)
        solve(original->right,cloned->right,target);
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(original,cloned,target);
        return ans;
    }
};