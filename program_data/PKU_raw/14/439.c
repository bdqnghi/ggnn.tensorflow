int main()
{
    int a[100000][3],i,j,n,b[100000][2],t,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        b[i][0]=a[i][0];
        b[i][1]=a[i][1]+a[i][2];
    }
    for(i=0;i<3;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(b[i][1]<b[k][1])
            {
                t=b[k][1];
                b[k][1]=b[i][1];
                b[i][1]=t;
                m=b[k][0];
                b[k][0]=b[i][0];
                b[i][0]=m;
            }
        }
    }
    for(i=0;i<3;i++)
    printf("%d %d\n",b[i][0],b[i][1]);
    return 0;
}
