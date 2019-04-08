int a[11][11]={0};
int b[11][11];
int sum(int x,int y)
{
    b[x][y]=a[x-1][y-1]+a[x-1][y]+a[x-1][y+1]+a[x][y-1]+a[x][y+1]+a[x+1][y-1]+a[x+1][y]+a[x+1][y+1]+2*a[x][y];
    return b[x][y];
}
main()
{
  int m,n,i,j;
  scanf("%d %d",&m,&n);
  a[5][5]=m;
  for(int k=1;k<=n;k++)
  { 
  for(i=5-k;i<=5+k;i++)
  {
    for(j=5-k;j<=5+k;j++)
    {
      b[i][j]=sum(i,j);
    }
  }
  for(int q=0;q<11;q++)
  {
    for(int p=0;p<11;p++)
    a[q][p]=b[q][p];
  }
  }
  for(i=1;i<10;i++)
  {
    for(j=1;j<9;j++)
    printf("%d ",b[i][j]);
    printf("%d\n",b[i][j]);
  }
 return 0;
} 
