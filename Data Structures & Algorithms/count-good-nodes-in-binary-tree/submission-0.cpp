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
    int check(TreeNode* root, int prev){
        if(!root){
            return 0;
        }
        int ans=0;
        if(root->val>=prev){
            ans++;
        }

        prev = max(prev,root->val);
        ans+=check(root->left,prev);
        ans+=check(root->right,prev);
        return ans;

    }
    int goodNodes(TreeNode* root) {
        return check(root, root->val);
    }
};
