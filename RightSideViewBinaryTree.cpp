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

// level-order traversal
void dfs(TreeNode* root, int level, vector<int>&result) {
    if(!root) return; // if current node does not exists stop here
    if(result.size()==level) result.push_back(root->val); // if provided level is equal to vector level push root value
    dfs(root->right, level + 1, result); // search right portion and increment level
    dfs(root->left, level + 1, result); // search left portion and increment level
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> result; // vector to store right view elements from root to leaf
    dfs(root, 0, result); // recursive call
    return result;
}