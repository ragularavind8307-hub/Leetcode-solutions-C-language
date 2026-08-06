#include<stdlib.h>
int compare(const void* a, const void* b) {
    int val1 = *(const int*)a;
    int val2 = *(const int*)b;
    
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}
int missingNumber(int* arr, int num) {
    int i,j;
    qsort(arr,num,sizeof(int),compare);
    for(i=0;i<num;i++){
        if(arr[i]!=i){
            return i;
        }
    }
    return num;
}
