int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int pCount = 0;
    for(int i=1; i<pricesSize; i++){
        
        // 大於則累計
        if(prices[i-1] < prices[i]){
            pCount++;
        }
        
        // 直到出現小於結算獲利
        else{
            if(pCount != 0){
                profit += prices[i - 1] - prices[i - 1 - pCount];
                pCount = 0;
            }
        }
    }
    // 結算目前持續獲利
    profit += prices[pricesSize - 1] - prices[pricesSize - 1 - pCount];
    return profit;
}