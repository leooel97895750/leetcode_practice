
// O(n)
bool checkAlphaNumeric(char *c){
    // 數字0-9
    if((48 <= *c) && (*c <= 57)) return 1;
    // 字母A-Z
    else if((65 <= *c) && (*c <= 90)){
        *c += 32;
        return 1;
    } 
    // 字母a-z
    else if((97 <= *c) && (*c <= 122)) return 1;
    else return 0;
}

bool isPalindrome(char * s){
    
    int fp = 0;
    int bp = strlen(s) - 1;
    while(fp < bp){
        if(!checkAlphaNumeric(&s[fp])){
            fp++;
            continue;
        }
        if(!checkAlphaNumeric(&s[bp])){
            bp--;
            continue;
        }
        printf("%c, %c\n", s[fp], s[bp]);
        if(s[fp] != s[bp]) return 0;
        fp++;
        bp--;
    }
    
    return 1;
}