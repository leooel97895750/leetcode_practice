/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// O(n)
// void dfs(struct TreeNode* node, int d, int* max){
//     //printf("%d, %d, %d\n", node->val, d, *max);
//     if(node != NULL){
//         if(node->left != NULL){
//             int vl = d + 1;
//             dfs(node->left, vl, max);
//         }
//         if(node->right != NULL){
//             int vr = d + 1;
//             dfs(node->right, vr, max);
//         }
//         if(node->left == NULL && node->right == NULL){
//             if(d > *max) *max = d;
//         }
//     }
// }


// int maxDepth(struct TreeNode* root){
//     int theMaxDepth = 0;
//     dfs(root, 1, &theMaxDepth);
//     return theMaxDepth;
// }

typedef struct TreeNode TreeNode;
int h2(TreeNode* root, int len){
    if(!root){return len;}
    len++;
    int m = h2(root->left, len);
    int n = h2(root->right, len);
    return m > n ? m : n;
}
int maxDepth(TreeNode* root){
    return h2(root, 0);
}