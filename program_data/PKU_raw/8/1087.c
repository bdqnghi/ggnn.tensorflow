int* putin()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    int *p=(int*)malloc((a+b+2)*sizeof(int));
    *p=a;
    *(p+1)=b;
    for(n=2;n<=a+b+1;n++)
    scanf("%d",(p+n));
    return p;
}
int* compare(int* a)
{
    int n,m,p;
    for(n=2;n<=(*a);n++)
    {
        for(m=n+1;m<=(*a)+1;m++)
        {
            if((*(a+n))>(*(a+m)))
            {
                p=*(a+n);
                *(a+n)=*(a+m);
                *(a+m)=p;
            }
        }
    }
    for(n=(*a)+2;n<=(*a)+(*(a+1));n++)
    {
        for(m=n+1;m<=(*a)+(*(a+1))+1;m++)
        {
            if((*(a+n))>(*(a+m)))
            {
                p=*(a+n);
                *(a+n)=*(a+m);
                *(a+m)=p;
            }
        }
    }
    return a;
}
void putout(int* a)
{
    int x;
    for(x=2;x<=(*a)+(*(a+1));x++)
    printf("%d ",a[x]);
    printf("%d",a[(*a)+(*(a+1))+1]);
}
main()
{
    putout(compare(putin()));
}
