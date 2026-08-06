bool isSameAfterReversals(int num) {
    int n,rem;
    int ans=0;
    n=num;
    while(num>0){
        rem=num%10;
        ans=(ans*10)+rem;
        num/=10;
    }
    num=0;
    while(ans>0){
        rem=ans%10;
        num=(num*10)+rem;
        ans/=10;
    }
    if(n==num)
        return true;
    else
        return false;
}
