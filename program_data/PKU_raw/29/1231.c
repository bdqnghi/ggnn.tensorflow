int main()
{
    int m,i,n,j;
    double s[q]={0.0};
    double a,b,e;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        a=2;
        b=1;
        for(j=1;j<=n;j++)
        {
            s[i]=s[i]+(a/b);
            e=a;
            a=a+b;
            b=e;
        }
    }
    for(i=1;i<=m;i++)
    {
        printf("%.3lf\n",s[i]);
    }
    return 0;
}