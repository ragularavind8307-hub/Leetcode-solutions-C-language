bool isPalindrome(int x) {
    if(x<0)
        return false;
    int num,rem;
    long ans=0;
    num=x;
    while(x!=0){
        rem=x%10;
        ans=(ans*10)+rem;
        x/=10;
    }
    if(ans==num)
        return true;
    else
        return false;
}
