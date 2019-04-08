main()
{
      int n;
      scanf("%d",&n);
      double x[100],y[100];
      int i,j;
      for (i=0;i<n;i++)
      {
          scanf("%lf %lf",&x[i],&y[i]);
      }
      double t,d;
      t=0;
      for (i=0;i<n;i++)
      {
          for (j=i;j<n;j++)
          {
              d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
              if (d>=t)
              {
                       t=d;
              }
          }
      }
      printf("%.4lf\n",t);
}
              