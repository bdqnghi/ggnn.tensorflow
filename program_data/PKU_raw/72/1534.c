int a[21][21];
int main()
{
    int m,n,i,j,f;
    int s=0;
    scanf("%d%d",&m,&n);
    f=0;
    for(i=0;i<=m+1;i++)
    {
        for(j=0;j<=n+1;j++)
        {
            if(i==0 && i==n+1 && j==0 && j==m+1)
            a[i][j]==0;
        }
    }
    for(i=1;i<=m;i++)
    {
       for(j=1;j<=n;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {    
            if(a[i][j]>=a[i][j+1] && a[i][j]>=a[i][j-1] && 
            a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j])  
            printf("%d %d\n",i-1,j-1);
       }
    }
    return 0;
}