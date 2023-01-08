/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inOrder(struct TreeNode* node, int* count, int* myNum){
    if(node != NULL){
        inOrder(node->left, count, myNum);
        myNum[(*count)++] = node->val;
        inOrder(node->right, count, myNum);
    }
}

bool isValidBST(struct TreeNode* root){
    int myNum[10000];
    int count = 0;
    inOrder(root, &count, myNum);
    
    for(int i=1; i<count; i++){
        if(myNum[i-1] >= myNum[i]) return false;
    }
    
    return true;
}