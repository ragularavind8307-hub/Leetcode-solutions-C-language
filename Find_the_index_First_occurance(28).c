int strStr(char* haystack, char* needle) {
    int i,count,k,j;
    char n;
    n=needle[0];
    if(strlen(haystack)<strlen(needle))
        return -1;
    for(i=0;i<strlen(haystack);i++){
        count=0;
        if(haystack[i]==n){
            k=i;
            int ans=i;
            for(j=0;j<strlen(needle);j++,k++){
                if(haystack[k]==needle[j]){
                    count++;
                    if(count==strlen(needle)){
                        return ans;
                    }
                }
                else
                    break;
            }
        }
    }
    return -1;
}
