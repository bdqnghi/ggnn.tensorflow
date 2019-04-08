main()
{
    int n,i,j,k,m,a[100]={0},f[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i==0)    f[i]=1;
        else
        {
            k=0;
            for(j=0,k=0;j<i;j++)
            {
                if(a[i]<=a[j]&&k<f[j])
                    k=f[j];
            }
            f[i]=k+1;
        }
    }
    for(i=0,k=1;i<n;i++)
    {
        if(k<f[i]) k=f[i];
    }
    printf("%d\n",k);
    }
            
