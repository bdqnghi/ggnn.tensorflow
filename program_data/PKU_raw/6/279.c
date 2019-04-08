int main()
{
    int c,n,i,j,x,y,sum,a[100][100];
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
      sum=0;
      scanf("%d %d",&x,&y);
      for(i=0;i<x;i++)
      {
        for(j=0;j<y;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
      for(i=0;i<x;i++)
        sum=sum+a[i][0];
      for(i=0;i<x;i++)
        sum=sum+a[i][j-1];
      for(j=0;j<y;j++)
         sum=sum+a[0][j];
      for(j=0;j<y;j++)
         sum=sum+a[x-1][j];
      sum = sum -a[0][0]-a[x-1][0]-a[0][y-1]-a[x-1][y-1];
      if(c!=n)
      printf("%d\n",sum);
      else
      printf("%d",sum);
    }
        } 