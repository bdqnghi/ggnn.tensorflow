int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    printf("%d\n",n/100);
    a=n%100;
    printf("%d\n",a/50);
    b=a%50;
    printf("%d\n",b/20);
    c=b%20;
    printf("%d\n",c/10);
    d=c%10;
    printf("%d\n",d/5);
    e=d%5;
    printf("%d\n",e/1);
    return 0;
}
