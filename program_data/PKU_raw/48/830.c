void f(int a[12][12],int m)
{   if(m==0)   return ;
    int i,j;
    int b[12][12]={0};
    for(i=1;i<=9;i++)
      for(j=1;j<=9;j++)
        {  if(a[i][j]!=0)
              {  b[i][j]=b[i][j]+2*a[i][j];
                 b[i+1][j]=b[i+1][j]+a[i][j];
                 b[i-1][j]=b[i-1][j]+a[i][j];
                 b[i+1][j+1]=b[i+1][j+1]+a[i][j];
                 b[i+1][j-1]=b[i+1][j-1]+a[i][j];
                 b[i-1][j-1]=b[i-1][j-1]+a[i][j];
                 b[i-1][j+1]=b[i-1][j+1]+a[i][j];
                 b[i][j+1]=b[i][j+1]+a[i][j];
                 b[i][j-1]=b[i][j-1]+a[i][j];
              }
        }
    for(i=1;i<=9;i++)
      for(j=1;j<=9;j++)
        {  a[i][j]=b[i][j];
        }
    f(a,m-1);
}
int main()
{   int a[12][12]={0};
    int n,m;
    cin>>n>>m;
    a[5][5]=n;
    f(a,m);
    int i,j;
    for(i=1;i<=9;i++)
      {  for(j=1;j<9;j++)
           {  cout<<a[i][j]<<' ';
           }
         cout<<a[i][9]<<endl;
      }
    return 0;
}