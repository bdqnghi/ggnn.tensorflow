main()
{
    int a[6][6],i,j,k,l,m=5,n=5,c=0,g=0;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (l=0,i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i][j]>l)
            {
                l=a[i][j];
                c=j;
            }
        }
        for (k=0;k<m;k++)
        {
            if (a[k][c]<l)
            {
                l=a[k][c];
                break;
            }
        }
        if (l==a[i][c])
        {
            printf ("%d %d %d\n",i+1,c+1,a[i][c]);
            g=-1;
        }
        l=a[i+1][0];
        c=0;
    }
    if(g==0)
    printf("not found\n");
}
