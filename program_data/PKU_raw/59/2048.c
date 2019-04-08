int main()
{
    char a[100][100],b[100][100];
    int n;
    cin>>n; 
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
            cin>>a[i][j];
            b[i][j]='0';
    }
    int m,N=0;
    cin>>m;
    m--;
    while(m--)
    {
              for(int i=1;i<=n;i++)
              for(int j=1;j<=n;j++)
              b[i][j]=a[i][j];
              for(int i=1;i<=n;i++)
              for(int j=1;j<=n;j++)
              {
                      if(b[i][j]=='.'&&(b[i+1][j]=='@'||b[i-1][j]=='@'||b[i][j+1]=='@'||b[i][j-1]=='@'))
                      a[i][j]='@';
              }
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
            if(a[i][j]=='@')
            N++;
    }
    cout<<N<<endl;
    return 0;
}
                      
