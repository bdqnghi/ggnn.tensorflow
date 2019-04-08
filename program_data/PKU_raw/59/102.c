int main()
{
    char a[128][128],b[128][128];
    int n,i,j,day,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
       for(j=1;j<=n;j++)
       cin>>a[i][j];
    cin>>day;
    day--;
    while(day)
    {
      day--;
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(a[i][j]=='@')
        {
          if(a[i-1][j]=='.')b[i-1][j]='@';
          if(a[i+1][j]=='.')b[i+1][j]='@';
          if(a[i][j-1]=='.')b[i][j-1]='@';
          if(a[i][j+1]=='.')b[i][j+1]='@';
        }
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(b[i][j]=='@')a[i][j]='@';
    }
    for(i=1;i<=n;i++)
       for(j=1;j<=n;j++)
       if(a[i][j]=='@')count++;
    cout<<count;
    cin>>n;
    return 0;
}
