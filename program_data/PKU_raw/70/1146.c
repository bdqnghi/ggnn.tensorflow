main()
{
      int n;
      double d=0,s;
      scanf("%d",&n);
      int m;
      m=n*(n-1)/2;
      double *a=(double *)malloc(n*sizeof(double));
      double *b=(double *)malloc(n*sizeof(double));
      double *p=(double *)malloc(m*sizeof(double));
      int i,j;
      for(i=0;i<n;i++)
      {
                      scanf("%lf %lf",&a[i],&b[i]);
      }
      for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
      {
                        s=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
                      if(s>d)
                      d=s;
      }
      printf("%.4f",d);
                      
     
}