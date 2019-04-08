void dump()
{
}
void seektop(int *point,int m,int n)
{
 int i,j=0;
 for(j=0;j<m;j++)
 {for(i=0;i<n;i++)
 {

  if(i==0&&j==0)
   point[i]>=point[i+1]&&point[i]>=point[i+20]?printf("%d %d\n",j,i):dump();
  else if(i==n-1&&j==0)
   point[i]>=point[i-1]&&point[i]>=point[i+20]?printf("%d %d\n",j,i):dump();
  else if(j==0)
   point[i]>=point[i+1]&&point[i]>=point[i+20]&&point[i]>=point[i-1]?printf("%d %d\n",j,i):dump();
  else if(i==0&&j!=m-1)
   point[i]>=point[i+1]&&point[i]>=point[i+20]&&point[i]>=point[i-20]?printf("%d %d\n",j,i):dump();
  else if(i==n-1&&j!=m-1)
   (point[i]>=point[i-1]&&point[i]>=point[i+20]&&point[i]>=point[i-20])?printf("%d %d\n",j,i):dump();
  else if(i==0&&j==m-1)
   (point[i]>=point[i+1]&&point[i]>=point[i-20])?printf("%d %d\n",j,i):dump();
  else if(i==n-1&&j==m-1)
   point[i]>=point[i-1]&&point[i]>=point[i-20]?printf("%d %d\n",j,i):dump();
  else if(j==m-1)
   point[i]>=point[i-1]&&point[i]>=point[i-20]&&point[i]>=point[i+1]?printf("%d %d\n",j,i):dump();
  else
   point[i]>=point[i-1]&&point[i]>=point[i+20]&&point[i]>=point[i-20]&&point[i]>=point[i+1]?printf("%d %d\n",j,i):dump();
 }
  point=point+20;//????????point=point+20*j?????????for??????????????????????
 }
}
void main()
{
 int m,n,i,j;
 scanf("%d%d",&m,&n);
 int height[20][20]={'\0'},*point=height[0];
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&height[i][j]);
  seektop(point,m,n);
}
