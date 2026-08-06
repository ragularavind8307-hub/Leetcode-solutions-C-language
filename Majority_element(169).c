int majorityElement(int* arr, int num) {
    int ele=arr[0];
    int count=1;
    for(int i=1;i<num;i++){
        if(count==0){
            ele=arr[i];
            count=1;
        }
        else if(ele==arr[i])
            count++;
        else
            count--;
    }
    return ele;
}
