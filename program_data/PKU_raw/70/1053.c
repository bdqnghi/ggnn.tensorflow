double dist(double x1,double y1,double x2,double y2)
{
       double dist;
       dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
       return dist;
}
main()
{
      int n;
      scanf("%d",&n);
      int i,j,k;
      double length[n][n];
      double x[n],y[n];
      for(i=0;i<n;i++)
      scanf("%lf %lf",&x[i],&y[i]);
      for(i=0;i<n;i++)
      {
      for(j=0;j<n;j++)
      {
      length[i][j]=dist(x[i],y[i],x[j],y[j]);
      }
      }
      double t=0;
      for(i=0;i<n;i++)
      {
      for(j=0;j<n;j++)
      {
      if(length[i][j]>t)
      t=length[i][j];
      }
      }
      printf("%.4lf",t);
      getchar();
      getchar();
}