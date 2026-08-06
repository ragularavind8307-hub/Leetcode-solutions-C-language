int hammingWeight(int n){
    int rem,count=0;
    while(n>2){
        rem=n%2;
        if(rem==1)
            count++;
        n/=2;
    }
    return count+1;
}
