// O(n)
void reverseString(char* s, int sSize){
    char tmp = '\0';
    for(int i=0; i<sSize/2; i++){   
        tmp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = tmp;
    }
}