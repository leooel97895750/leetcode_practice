/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// O(n)
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    //struct ListNode* saveNode = malloc((n-1) * sizeof(head));
    
    struct ListNode* nowNode = head;
    
    // 計算長度
    int count = 0;
    while(nowNode->next != NULL){
        nowNode = nowNode->next;
        count++;
    }
    // 長度為1則直接回傳NULL
    if(count == 0) return NULL;
    
    // 若刪除的是首位則複製第二位的值並刪除第二位，同時檢查結尾是否為NULL
    nowNode = head;
    if((count + 1 - n) == 0){
        nowNode->val = nowNode->next->val;
        if(nowNode->next->next == NULL){
            nowNode->next = NULL;
        }
        else{
            nowNode->next = nowNode->next->next;
        }
        return head;
    }
    
    // 刪除節點同時檢查結尾是否為NULL
    for(int i=0; i<(count-n); i++){
        nowNode = nowNode->next;
    }
    if(nowNode->next->next == NULL){
        nowNode->next = NULL;
    }
    else{
        nowNode->next = nowNode->next->next;
    }
    
    return head;
}