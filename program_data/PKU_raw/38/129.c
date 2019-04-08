main()
{
    int n,m,i,j;
    double a[1100]={0},sum=0,ave,s=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            scanf("%lf",&a[j]);
            sum=sum+a[j];
        }
        ave=sum/m;
        for(j=1;j<=m;j++)
        {
            s=s+(a[j]-ave)*(a[j]-ave);
        }
        s=s/m;
        x=sqrt(s);
        printf("%.5f\n",x);
        for(j=1;j<=m;j++) a[j]=0;
        sum=0;
        s=0;
    }
}