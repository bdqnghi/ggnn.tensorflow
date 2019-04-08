int a[20];
int f(int i)
{
    if (i==1||i==2)
    {
       a[i]=1;
       return 1;
    }
    else
    {
        a[i]=f(i-1)+f(i-2);
        return (f(i-1)+f(i-2));
    }
}
main()
{
    int n,i,b;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&b);
        printf("%d\n",f(b));
    }
    getchar();
    getchar();
}       