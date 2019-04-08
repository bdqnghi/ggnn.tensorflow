int zhishu(int n)
{
    int i,m;
    for(i=2;i<n;i++)
    {
       if (n%i==0)
        {m=0;
        break;}
    }
    if (i==n)
     m=1;
     return m;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=3;i<=n/2;i++)
    {
            a=zhishu(i);
            b=zhishu(n-i);
            if (a==1&&b==1)
             printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
    getchar();
    getchar();
}
