int main(){
    int n,i,s;
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
       if(i%7&&i/10!=7&&i%10!=7)s+=i*i;
    }
    printf("%d\n",s);
    return 0;
}
