// xor 兩兩相消

// t O(n) s O(1)
int singleNumber(int* nums, int numsSize){
    
    int ans = nums[0];
    
    if(numsSize == 1){
        return ans;
    }
    for(int i=1; i<numsSize; i++){
        ans ^= nums[i];
    }
    
    return ans;
}