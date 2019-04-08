
int k,m,n,a[100][100],i,j,sum=0;
int main()
{
    cin>>k;
    while(k>0)
    {
        k--;
        cin>>m>>n;
        for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
        if(m==1||m==2||n==1||n==2)
        {
            for(i=1;i<=m;i++)
                for(j=1;j<=n;j++)
                sum+=a[i][j];
        }
        else
        {
            for(j=1;j<=n;j++)
            sum+=a[1][j];
            for(j=1;j<=n;j++)
            sum+=a[m][j];
            for(i=2;i<m;i++)
            sum+=a[i][1];
            for(i=2;i<m;i++)
            sum+=a[i][n];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
