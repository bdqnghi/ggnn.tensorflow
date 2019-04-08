char f(int x,int y,int a[20][20],int m,int n)
{
  char c;int i,t1=0,t2=0;
  int b[4]={0};char d[4]={'\0'};
  if(x-1>=0) {b[0]=1;t1++;if(a[x-1][y]<=a[x][y]) d[0]='t';}
  if(x+1<=m-1) {b[1]=1;t1++;if(a[x+1][y]<=a[x][y]) d[1]='t';}
  if(y-1>=0) {b[2]=1;t1++;if(a[x][y-1]<=a[x][y]) d[2]='t';}
  if(y+1<=n-1) {b[3]=1;t1++;if(a[x][y+1]<=a[x][y]) d[3]='t';}
  for(i=0;i<4;i++) {if(b[i]==1&&d[i]=='t') t2++;}
  if(t1==t2) c='t';
  else c='f'; 
  return c;
}
main()
{
  int m,n,i,j;
  scanf("%d %d",&m,&n);
  int a[20][20]={0},b[20][20]={0};
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++){scanf("%d",&a[i][j]);}
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(f(i,j,a,m,n)=='t') b[i][j]=1;
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b[i][j]==1) printf("%d %d\n",i,j);
    }
  }
  getchar();
  getchar();
}
