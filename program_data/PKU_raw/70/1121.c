
main()
{
      int i,j,m,n;
      double x[1000],y[1000],z[500][500];
      double k=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%lf %lf",&x[i],&y[i]);
      for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
      z[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {
                      if(z[i][j]>k)
                      k=z[i][j];
                      }     
                      printf("%.4f",k);
      
      }