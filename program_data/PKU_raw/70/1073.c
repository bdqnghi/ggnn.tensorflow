main()
{
      int n;
      scanf("%d",&n);
      double x[n],y[n];
      int i,j;
      for(i=0;i<n;i++)
      {
                      scanf("%lf %lf",&x[i],&y[i]);
      }
      double c[n][n];
      double dis=0;
      for(i=0;i<n;i++)
      {
                      for(j=0;j<n;j++)
                      {
                                      c[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                                      if(c[i][j]>dis)
                                      dis=c[i][j];
                      }
      }
      printf("%.4lf",sqrt(dis));
}