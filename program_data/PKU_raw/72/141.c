
int main()
{int n,m,i,j,a[20][20];
scanf("%d%d",&m,&n);
for(i=0;i<=m-1;i++)
for(j=0;j<=n-1;j++)
scanf("%d",&a[i][j]);

for(i=0;i<=m-1;i++)
{
                   for(j=0;j<=n-1;j++)
                   {
                                      if(i==0&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
                                      {printf("%d %d\n",i,j);continue;}
                                      if(i==0&&j==n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
                                     {printf("%d %d\n",i,j);continue;}
                                      if(i==m-1&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
                                      {printf("%d %d\n",i,j);continue;}
                                      if(i==m-1&&j==n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
                                      {printf("%d %d\n",i,j);continue;}
                                      
                                      if(i==0&&j!=n-1&&j!=0&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
                                      {printf("%d %d\n",i,j);continue;}
                                     if(i==m-1&&j!=n-1&&j!=0&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
                                      {printf("%d %d\n",i,j);continue;}
                                      if(i!=0&&i!=m-1&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
                                      {printf("%d %d\n",i,j);continue;}
                                      if(i!=0&&i!=m-1&&j==n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
                                      {printf("%d %d\n",i,j);continue;}
                                      
                                      if(i<m-1&&j<n-1&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
                                       {printf("%d %d\n",i,j);continue;}
                   }
}
                                      
  
   return 0;
}
