main()
{
    int a[500]={0},b[500]={0},n,i,e=0,j,k;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            b[e]=a[i];
            e++;
        }
    }
    for (i=0;i<e;i++)
    {
        for (j=0;j<e-1;j++)
        {
            if (b[j]>b[j+1])
            {
                k=b[j+1];
                b[j+1]=b[j];
                b[j]=k;
            }
        }
    }
    for (i=0;i<e-1;i++)
    {
        printf("%d,",b[i]);
    }
    printf("%d",b[e-1]);
}

