int main()
{
  int n1,v;
  cin >> n1 ;
  
  cin.get();
  const int n=n1;
  char a[100][100]={0};
  char b[100][100]={0};
  int i,j,k,l;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      cin >> a[i][j];
      b[i][j]=a[i][j];
    }
  }
  cin >> v;
  int sum=0,t=0;
  while(t<v-1)
  {
    t++;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
        if(a[i][j]=='@')
        {
          if((b[i-1][j]!='#')&&(b[i-1][j]!=0))
          {
            b[i-1][j]=a[i][j];
          }
          if((b[i+1][j]!='#')&&(b[i+1][j]!=0))
          {
            b[i+1][j]=a[i][j];
          }
          if((b[i][j-1]!='#')&&(b[i][j-1]!=0))
          {
            b[i][j-1]=a[i][j];
          }
          if((b[i][j+1]!='#')&&(b[i][j+1]!=0))
          {
            b[i][j+1]=a[i][j];
          }
        }
      }
    }
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
        a[i][j]=b[i][j];
      }
    }
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(a[i][j]=='@')
      {
        sum++;
      }
    }
  }
  cout << sum<< endl;
  cin.get();cin.get();cin.get();
  return 0;
}
