
// O(log10 n)
int reverse(int x){
    int revX = 0;
    int max = pow(2, 31) - 1;
    int min = pow(2, 31) * -1;
    //printf("%d", max);
    while(x != 0){
        
        if(revX > (max / 10)) return 0;
        else if(revX < (min / 10)) return 0;
        else{
            revX *= 10;
            if(((x % 10) > 0) && revX > (max - (x % 10))) return 0;
            else if(((x % 10) < 0) && revX < (min - (x % 10))) return 0;
            revX += x % 10;
            x /= 10;
        }
    }
    return revX;
}