int main()
{   
   int i,j,m,n,k;
   struct point
   {
       int now;
       int answer;
   }a[11][11];
  scanf("%d",&m);
  scanf("%d",&n);
  for (i=0;i<11;i++)
  for (j=0;j<11;j++)
  a[i][j].now=0;
  a[5][5].now=m;
  for (k=0;k<n;k++)
  {
      for (i=1;i<10;i++)
      for (j=1;j<10;j++)
      a[i][j].answer=2*a[i][j].now+a[i-1][j-1].now+a[i-1][j].now+a[i-1][j+1].now+a[i][j-1].now+a[i][j+1].now+a[i+1][j-1].now+a[i+1][j].now+a[i+1][j+1].now;
      for (i=1;i<10;i++)
      for (j=1;j<10;j++)
      a[i][j].now=a[i][j].answer;
  }
     for (i=1;i<10;i++)
    { 
     for (j=1;j<9;j++)
     printf("%d ",a[i][j].now);
     printf("%d\n",a[i][9].now);
    }
}