main()
{
  int k,n;
  double *p;
  double s,a,x;
  int i,j;
  scanf("%d",&k);
  for(i=0;i<k;i++)
    {
      s=0;
      a=0;
      x=0;
      scanf("%d",&n);
      p=(double*)malloc(sizeof(double)*n);
      for(j=0;j<n;j++)
       {
         scanf("%lf",&p[j]);
         x=x+p[j]/n;
       } 
      for(j=0;j<n;j++)
       {
         a=a+(p[j]-x)*(p[j]-x);
       }
      s=sqrt(a/n);
      printf("%.5lf\n",s);
    }
  
}       
