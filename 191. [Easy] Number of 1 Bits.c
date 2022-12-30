int hammingWeight(uint32_t n) {
    int count = 0;
    for(int i=0; i<32; i++){
        uint32_t mask = 1;
        mask = mask << i;
        if((n & mask) > 0) count++;
    }
    return count;
}