int main()
{char a[102][102][102],now;
 int yes[102][102],i,j,k,n,m,sum;
 cin>>n;
 memset(a,'.',sizeof(a));
 memset(yes,0,sizeof(yes));
 for (i=1;i<=n;i++)
      for (j=1;j<=n;j++)
           {
            cin>>a[1][i][j];
            }
 cin>>m;
 for (k=1;k<m;k++)
     {

     for (i=1;i<=n;i++)
           for (j=1;j<=n;j++)
                { if (a[k][i][j]=='@')
                    { a[k+1][i][j]=a[k][i][j];
                      if (a[k][i-1][j]!='#')
                          a[k+1][i-1][j]='@';
                      if (a[k][i][j-1]!='#')
                          a[k+1][i][j-1]='@';
                      if (a[k][i+1][j]!='#')
                          a[k+1][i+1][j]='@';
                      if (a[k][i][j+1]!='#')
                          a[k+1][i][j+1]='@';
                    }
                  if (a[k][i][j]=='#')
                      a[k+1][i][j]=a[k][i][j];
                }
       //for (i=1;i<=n;i++)
        //  {for (j=1;j<=n;j++)
         //        cout<<a[k+1][i][j];
         //  cout<<endl;
        //  }
     }
 sum=0;
 for (i=1;i<=n;i++)
      for (j=1;j<=n;j++)
           if (a[m][i][j]=='@')
               sum++;
 cout<<sum<<endl;
 return 0;

}
