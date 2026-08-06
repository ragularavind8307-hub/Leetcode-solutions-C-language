#include<stdlib.h>
int compare(const void* a, const void* b) {
    int val1 = *(const int*)a;
    int val2 = *(const int*)b;
    
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}
bool containsDuplicate(int* arr, int num) {
    int i;
    qsort(arr, num, sizeof(int), compare);
    for(i=0;i<num-1;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;
}
