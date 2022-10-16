
// O(n)
int firstUniqChar(char * s){
    int slen = strlen(s);
    int dict[26] = {0};
    for(int i=0; i<slen; i++){
        //printf("%d\n", (int) s[i]);
        int letter = ((int)s[i]) - 97;
        dict[letter]++;
    }
    for(int j=0; j<slen; j++){
        int letter = ((int)s[j]) - 97;
        if(dict[letter] == 1){
            return j;
        }
    }
    return -1;
}