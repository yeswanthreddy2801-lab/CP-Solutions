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
    int depth(TreeNode* root)
    {
        if(root==NULL)return 0;
        // if(root->left==NULL && root->right==NULL)return 0;
        return 1+min(depth(root->left),depth(root->right));
    }
    int minDepth(TreeNode* root) {
        // return depth(root)-1;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        if(root==NULL)return 0;
        while(!q.empty())
        {
            TreeNode* x=q.front().first;
            int y=q.front().second;
            q.pop();
            
            if(x->left!=NULL)
            {
                q.push({x->left,y+1});
            }
            if(x->right!=NULL)
            {
                q.push({x->right,y+1});
            }
            if(x->left==NULL && x->right==NULL)
            return y+1;
        }
        return -1;
    }
};