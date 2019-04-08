int main()
{
    int m,n,i,j,k;
    cin>>m>>n;
    int a[11][11][2];
    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {
            a[i][j][0]=0;
        }
    }
    a[5][5][0]=m;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=9;i++)
        { 
            for(j=1;j<=9;j++)
            {
                a[i][j][1]=a[i][j][0]*2+a[i][j-1][0]+a[i][j+1][0]+a[i+1][j][0]+a[i-1][j][0]+a[i+1][j+1][0]+a[i-1][j-1][0]+a[i+1][j-1][0]+a[i-1][j+1][0];
            }
        }
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                a[i][j][0]=a[i][j][1];
            }
        }
    }
    for(i=1;i<=9;i++)
    {
        cout<<a[i][1][1];
        for(j=2;j<=9;j++)
        {
            cout<<' '<<a[i][j][1];
        }
        cout<<endl;
    }
    return 0;
}
