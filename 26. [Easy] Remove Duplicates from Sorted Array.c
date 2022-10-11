int removeDuplicates(int* nums, int numsSize){
    int p = 0;
    for(int i=1; i<numsSize; i++){
        if(nums[p] != nums[i]){
            p++;
            nums[p] = nums[i];
        }
    }
    return p+1;
}