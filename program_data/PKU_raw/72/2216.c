
int main(int argc, char* argv[])
{
  static int a[30][30],b[400][2];
  int i,j,k=0,m,n;
  scanf("%d%d",&m,&n);
  for(i=1;i<=m;i++)
  {
     for(j=1;j<=n;j++)
     {
        scanf("%d",&a[i][j]);
     }
  }
  for(i=1;i<=m;i++)
  {
     for(j=1;j<=n;j++)
     {
        if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
        {b[k][0]=i-1;b[k][1]=j-1;k++;}
     }
  }
  for(i=0;i<k;i++)
  {
     printf("%d %d\n",b[i][0],b[i][1]);
  }
	return 0;
}