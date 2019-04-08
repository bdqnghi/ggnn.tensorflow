int main()
{
    int m,n,i,j,t,r,s,a[30][30];
    scanf("%d %d",&m,&n);
    for(i=0;i<=m+1;i++)
        for(j=0;j<=n+1;j++)
            a[i][j]=0;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            {
                
                if(  (a[i][j]>=a[i-1][j]) && (a[i][j]>=a[i][j-1]) && (a[i][j]>=a[i+1][j]) && (a[i][j]>=a[i][j+1]) )
                    printf("%d %d\n",i-1,j-1);
            }
    getchar();
}
