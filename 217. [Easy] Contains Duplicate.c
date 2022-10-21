

struct Data{
	int val;
	int empty;
	struct Data *link;
};

// O(n)
int containsDuplicate(int* nums, int numsSize) {

    // 建立長度為997的hashtable
    struct Data Hashtable[997];
    
    // 初始化
    for(int i=0;i<997;i++){
    	Hashtable[i].empty = 1;
    	Hashtable[i].link = NULL;
    }
    
    // 尋訪陣列
    for(int i=0;i<numsSize;i++){
        
        if(Hashtable[hash(nums[i])].empty == 1){
		    Hashtable[hash(nums[i])].val = nums[i];
		    Hashtable[hash(nums[i])].empty = 0;
        }
        else if(Hashtable[hash(nums[i])].empty == 0){
            // 重複則回傳
		    if(Hashtable[hash(nums[i])].val == nums[i]){
                return 1;
            }
			
            // 碰撞但非重複;
            struct Data *prev = &Hashtable[hash(nums[i])];

            // 往深層尋找
            while(prev->link != NULL)
            {
                prev = prev->link;
                // 若重複則回傳
                if(prev->val == nums[i])
                    return 1;
            }
            
            // 在最深層新增一個node
            struct Data *current = malloc(sizeof(Hashtable[hash(nums[i])]));
            current->link = NULL;
            current->val = nums[i];
            prev->link = current;

        }
    }
    return 0;
}

int hash(int number)    //get hash value
{
	return abs(number%997);
}