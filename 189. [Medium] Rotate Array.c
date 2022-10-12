// O(2n)
void rotate(int* nums, int numsSize, int k){
    
    // 複製一個陣列
    int tmp[numsSize];
    for(int i=0; i<numsSize; i++){
        tmp[i] = nums[i];
    }
    
    // 避免循環
    k %= numsSize;
    
    // 將k個值填入
    for(int i=0; i<k; i++){
        nums[i] = tmp[numsSize-k+i];
    }
    
    // 補上剩下的值
    for(int i=k; i<numsSize; i++){
        nums[i] = tmp[i-k];
    }
    
}