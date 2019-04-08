int prime(int n)
{
    int i,isprime=1;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
           {
            isprime=0;
            break;
           }
    }
    return isprime;    
}
main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=3;i<=n/2;i+=2)
    {
        a=prime(i);
        b=prime(n-i);
        if(a==1&&b==1)
            printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
}
