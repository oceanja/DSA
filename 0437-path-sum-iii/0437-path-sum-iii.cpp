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

int  dfs(TreeNode* node, long long targetSum){

    if(node==NULL) return 0;
int totalPaths=0;
    if(node->val==targetSum){
        totalPaths++;
    }

    totalPaths+=dfs(node->left, targetSum-node->val);
    totalPaths+=dfs(node->right,targetSum-node->val);

    return totalPaths;
    
}
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return 0;
        }

       return  dfs(root,targetSum) + pathSum(root->left,targetSum)+ pathSum(root->right,targetSum);


        
    }
};