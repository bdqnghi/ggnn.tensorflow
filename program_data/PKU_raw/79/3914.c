main()
{
    int a[300];
    int i,j,k,m,n;
    for(;;)
    {
        memset(a,0,sizeof(a));
        scanf("%d %d",&n,&m);
        if(m==0&&n==0)
        break;
        for(i=0,j=0,k=0;i<n-1;j++)
        {
            if(j>=n)
            j-=n;
            if(a[j]==0)
            k++;
            if(k==m)
            {
                a[j]=1;
                k=0;
                i++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            printf("%d\n",i+1);
        }
    }
}
