int main()
{
    int n,t,i,j,m,counter=0,b[110][110],c[110][110];
    char a[110][110];
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>n;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        {
         cin>>a[i][j];
         if(a[i][j]=='#') 
           b[i][j]=-1;         // -1 kongzhe
         if(a[i][j]=='@')
           {b[i][j]=1; }       // 1 debing
         }
    cin>>m;
    
    for(i=0;i<=n;i++)
     { b[0][i]=10;b[n+1][i]=10;}
    for(i=0;i<=n;i++)
     {b[i][0]=10;b[i][n+1]=10;}
     
     
    for(t=1;t<m;t++)
    {
       for(i=1;i<=n;i++)
         for(j=1;j<=n;j++)
             if(b[i][j]==1&&c[i][j]==0)
                {
                    if(b[i-1][j]==0&&c[i-1][j]==0)
                      { b[i-1][j]=1;c[i-1][j]=1;}
                    if(b[i][j-1]==0&&c[i][j-1]==0)
                      {b[i][j-1]=1;c[i][j-1]=1;}
                    if(b[i+1][j]==0&&c[i+1][j]==0)
                     { b[i+1][j]=1;c[i+1][j]=1;}
                    if(b[i][j+1]==0&&c[i][j+1]==0)
                      {b[i][j+1]=1;c[i][j+1]=1;}
                }
             else continue;
       
      memset(c,0,sizeof(c));
    }
    counter=0;
     for(i=1;i<=n;i++)
         for(j=1;j<=n;j++)
           if(b[i][j]==1)
            {counter++;}
    cout<<counter<<endl;
  
    return 0;
}
                       
