
struct point
{
       double x;
       double y;
};

int main(int argc, char *argv[])
{
  int n,i,j;
  scanf("%d",&n);
  struct point stu[n]; 
  for (i=0;i<=n-1;i++)
      scanf("%lf%lf",&stu[i].x,&stu[i].y);
  double dis[n][n];
  for (i=0;i<=n-1;i++)
  {
      for (j=i+1;j<=n-1;j++)
          dis[i][j]=sqrt((stu[i].x-stu[j].x)*(stu[i].x-stu[j].x)+(stu[i].y-stu[j].y)*(stu[i].y-stu[j].y));
  }
  double max=0;
  for (i=0;i<=n-1;i++)
  {
      for (j=i+1;j<=n-1;j++)
          if (max<dis[i][j])
             max=dis[i][j];
  }
  printf("%.4lf",max);
  return 0;
}
