
int main()
{
    int n,day,i,j,k;
    char x;
    int a[105][105],b[105][105]={0};
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> x;
            if (x=='.')     a[i][j]=0;
            else if(x=='#') a[i][j]=-111;
            else if(x=='@') a[i][j]=1;
        }
    }
    cin >> day;

    k=1;
    while(k<day)
    {
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(a[i][j]==1)
                {
                    b[i-1][j]++;
                    b[i+1][j]++;
                    b[i][j+1]++;
                    b[i][j-1]++;
                }
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if((a[i][j]==0)&&(b[i][j]!=0))a[i][j]=1;
        k++;
    }
    k=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]==1)
            {
                k++;
            }
    cout << k;
}