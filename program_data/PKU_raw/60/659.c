int f(int a)
{
    int i,c;
    int count=0;
    for(i=1;i<=a;i++)
    {
        c=a%i;
        if(c==0)
        count=count+1;
    }
    if(count==2)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i,j,c,d;
    scanf("%d",&n);
    if(n>=5)
    {
        n=n-2;
        for(i=1;i<=n;i++)
        {
            j=i+2;
            c=f(i);
            d=f(j);
            if(c==1&&d==1)
            printf("%d %d\n",i,j);
        }
    }
    else
    printf("empty");
    return 0;
}