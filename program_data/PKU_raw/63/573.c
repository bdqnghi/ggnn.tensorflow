int main()
{
    int n,q,m,i,j,k;
    scanf("%d%d",&n,&q);
    int a[n][q];
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&q,&m);
    int b[q][m];
    for(i=0;i<q;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    int c[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        c[i][j]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             for(k=0;k<q;k++)
             c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(m-1);j++)
        printf("%d ",c[i][j]);
        printf("%d\n",c[i][j]);
    }
    getchar();
    getchar();
}