int n;
int check()
{
    int a[n][n];
    int c,i,j,mi,mj,r=0;
    for(i=n-1;i>=0;i--)
        for(j=n-1;j>=0;j--)
            scanf("%d",&a[i][j]);
    for(c=n;c>1;c--)
    {
        for(i=0;i<c;i++)
        {
            mi=a[i][0];
            for(j=0;j<c;j++)
                if(mi>a[i][j])mi=a[i][j];
            for(j=0;j<c;j++)a[i][j]-=mi;
        }
        for(j=0;j<c;j++)
        {
            mj=a[0][j];
            for(i=0;i<c;i++)
                if(mj>a[i][j])mj=a[i][j];
            for(i=0;i<c;i++)a[i][j]-=mj;
        }
        r+=a[c-2][c-2];
        a[c-2][c-2]=a[c-1][c-1];
        for(i=0;i<c-2;i++)a[i][c-2]=a[i][c-1];
        for(j=0;j<c-2;j++)a[c-2][j]=a[c-1][j];
    }
    return r;
}
int main()
{
    int z;
    scanf("%d",&n);
    for(z=0;z<n;z++)
        printf("%d\n",check());
    return 0;
}
