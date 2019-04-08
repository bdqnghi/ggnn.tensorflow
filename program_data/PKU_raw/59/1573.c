int main()
{
    int n,flag[105][105],i,j,m,sum=0;
    char a[105][105];
    cin>>n;
    for (i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
    {cin>>a[i][j];
    if (a[i][j]=='#')
    flag[i][j]=-1;
    if (a[i][j]=='@')
    flag[i][j]=1;
    if (a[i][j]=='.')
    flag[i][j]==0;
    
    }
    }
    cin>>m;
    for (int k=2;k<=m;k++)
    {for (i=1;i<=n;i++)
         {for (j=1;j<=n;j++)
              {if (a[i][j]=='@'&&flag[i][j]<k)
                  {if (flag[i][j-1]==0){a[i][j-1]='@';flag[i][j-1]=k;}
                  if (flag[i][j+1]==0){a[i][j+1]='@';flag[i][j+1]=k;}
                  if (flag[i+1][j]==0){a[i+1][j]='@';flag[i+1][j]=k;}
                  if (flag[i-1][j]==0){a[i-1][j]='@';flag[i-1][j]=k;}}
              }
         }
    }
    for (i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
    {if (a[i][j]=='@')sum++;
    }
    }
    cout<<sum;
    return 0;
}
