/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// O(n)
// O(1)?

bool checkNode(struct TreeNode* left, struct TreeNode* right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;
    if(left->val != right->val) return false;
    if(checkNode(left->left, right->right) == false) return false;
    if(checkNode(left->right, right->left) == false) return false;
    return true;
}

bool isSymmetric(struct TreeNode* root){
    return checkNode(root->left, root->right);
}