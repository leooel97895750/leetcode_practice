void charCount(int * arr, char * str){
    int sLen = strlen(str);
    for(int i=0; i<sLen; i++){
        arr[str[i] - 'a']++;
    }
}
// O(n)
bool countCompare(int * aArr, int * bArr){
    for(int i=0; i<26; i++){
        if(aArr[i] != bArr[i]){
            return false;
        }
    }
    return true;
}

bool isAnagram(char * s, char * t){
    if(strlen(s) != strlen(t)){
        return false;
    }
    
    int sCount[26] = {0};
    charCount(sCount, s);
    int tCount[26] = {0};
    charCount(tCount, t);
    return countCompare(sCount, tCount);
}