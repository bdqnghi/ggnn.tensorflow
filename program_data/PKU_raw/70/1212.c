main()
{
      int n,k,i,j; 
      double s,m,x,y;
      scanf("%d",&n);
      double *a=(double *)malloc((n+1)*sizeof(double));
      double *b=(double *)malloc((n+1)*sizeof(double));
      for(i=1;i<=n;i++)
      {
            scanf("%lf %lf",&a[i],&b[i]);
      }
      for(m=0,i=1;i<=n-1;i++)
      {
         for(j=i+1;j<=n;j++)
         {
              x=a[j]-a[i]; y=b[j]-b[i];
              s=x*x+y*y;
              if(s>=m) m=s;
         }
      }
      double dis=sqrt(m);
      printf("%.4f",dis);
}