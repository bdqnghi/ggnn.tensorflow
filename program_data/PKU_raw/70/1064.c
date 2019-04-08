main()
{
      int n,i,t;double x[100],y[100],e,f[100][100],g[100],k;f[0][0]=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {scanf("%lf %lf",&x[i],&y[i]);}
      for(i=0;i<n-1;i++)
      {for(t=i+1;t<n;t++)
      {e=(x[i]-x[t])*(x[i]-x[t])+(y[i]-y[t])*(y[i]-y[t]);
        f[i][t]=sqrt(e);
       if(f[i][t]<f[i][t-1])
        {f[i][t]=f[i][t-1];}}
        g[i]=f[i][n-1];f[i+1][0]=0;}
       for(i=0;i<n-1;i++)
      { if(g[i]>g[i+1])
      { k=g[i];g[i]=g[i+1];g[i+1]=k;}}
      printf("%.4lf",g[n-1]);
      getchar(); getchar(); getchar(); getchar();
      }
   